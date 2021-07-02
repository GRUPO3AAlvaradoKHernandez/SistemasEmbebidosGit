import numpy as np # linear algebra
import pandas as pd # data processing, CSV file I/O (e.g. pd.read_csv)
import datetime as dt
import matplotlib.pyplot as plt 
#%matplotlib inline 
# Input data files are available in the "../input/" directory.
# For example, running this (by clicking run or pressing Shift+Enter) will list all files under the input directory

import os

dataset = pd.read_csv("./IOT-temp.csv")
dataset.drop(columns=['room_id/id','id'], inplace=True)
dataset.rename(columns={'out/in':"Out_In"}, inplace=True)
dataset.drop_duplicates(subset=['noted_date','Out_In','temp'], keep='first',inplace=True)
dataset['date'] = dataset['noted_date'].apply(lambda x: dt.datetime.strptime(x, '%d-%m-%Y %H:%M').date())


dataset['day'] = dataset['noted_date'].apply(lambda x: dt.datetime.strptime(x, '%d-%m-%Y %H:%M').day)
dataset['month'] = dataset['noted_date'].apply(lambda x: dt.datetime.strptime(x, '%d-%m-%Y %H:%M').month)
dataset['year'] = dataset['noted_date'].apply(lambda x: dt.datetime.strptime(x, '%d-%m-%Y %H:%M').year)

dataset['hour'] = dataset['noted_date'].apply(lambda x: dt.datetime.strptime(x, '%d-%m-%Y %H:%M').hour)
dataset['minute'] = dataset['noted_date'].apply(lambda x: dt.datetime.strptime(x, '%d-%m-%Y %H:%M').minute)
dataset.drop(columns = ['noted_date'], inplace = True)

d=dataset[0:10]
send1=d['temp']
send2=d['Out_In']
send3=d['year']
send4=d['month']
send5=d['day']
send6=d['hour']
send7=d['minute']
d.dtypes
del d['date']
columns=d.columns


import socket, pickle

HOST = 'localhost'
PORT = 10000
# Create a socket connection.
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((HOST, PORT))

# Create an instance of ProcessData() to send to server.
variable = d
# Pickle the object and send it to the server
data_string = pickle.dumps(variable)
s.send(data_string)
s.close()
print ('Data Sent to Server')