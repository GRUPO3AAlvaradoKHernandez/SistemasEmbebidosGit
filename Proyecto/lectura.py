import pyodbc
import pandas as pd
# Windows Authentication
cnxn = pyodbc.connect(
    'Driver={SQL Server};'
    'Server=DESKTOP-8RMHNPU\MSSQLSERVER03;'
    'Database=Proyecto;'
    'Trusted_Connection=yes;')

cursor = cnxn.cursor()

sql_query = pd.read_sql_query('SELECT * FROM Proyecto.oficina.temperatura',cnxn)
print(sql_query)
print(type(sql_query))
cursor.close()