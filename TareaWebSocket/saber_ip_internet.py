import socket
socket.gethostbyname(socket.gethostname()) #se obtiene la IP con el nombre del servidor
import os
osip = os.popen('curl ifconfig.me').readline()
print(osip) #ip con la que se esta apuntando hacia la internet
