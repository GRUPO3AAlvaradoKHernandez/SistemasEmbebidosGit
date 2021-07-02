import socket, pickle
from pandas.core.indexes.base import Index

HOST = 'localhost'
PORT = 10000
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((HOST, PORT))
s.listen(1)
conn, addr = s.accept()
print ('Connected ')
while True:
            data = conn.recv(4096)            
            if data:
                data_variable = pickle.loads(data)
            else:
                break

conn.close()
print (data_variable)
# Access the information by doing data_variable.process_id or data_variable.task_id etc..,
print ('Data received from client')

import pyodbc
import pandas as pd


df = pd.DataFrame(data_variable)

# Windows Authentication
cnxn = pyodbc.connect(
    'Driver={SQL Server};'
    'Server=DESKTOP-8RMHNPU\MSSQLSERVER03;'
    'Database=Proyecto;'
    'Trusted_Connection=yes;')


cursor = cnxn.cursor()

# Insert DataFrame to Table
for index, row in df.iterrows():
    cursor.execute('INSERT INTO Proyecto.oficina.temperatura (temp, Out_In, day, month, year, hour, minute) values(?,?,?,?,?,?,?)',
                row.temp, 
                row.Out_In,
                row.day,
                row.month,
                row.year,
                row.hour,
                row.minute
                )
cnxn.commit()

sql_query = pd.read_sql_query('SELECT * FROM Proyecto.oficina.temperatura',cnxn)
print(sql_query)
print(type(sql_query))
cursor.close()