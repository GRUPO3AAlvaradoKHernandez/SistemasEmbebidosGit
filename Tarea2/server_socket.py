#server_socket.py
import socket
import threading

HEADER = 64 #LARGO DEL MENSAJE (64 bites)
PORT = 80 # PRIMERO SE DEJA VACIO PARA VER QUE PUERTAS ESTAN ABIERTAS
SERVER = '158.251.91.68'
ADDR = (SERVER, PORT) #SE DEFINE UNA TUPLA, donde esta la ip y el puerto
FORMAT = 'utf-8' #FORMATO CON EL CUAL SE TRABAJA Y TRATAN LOS MENSAJES
DISCONNECT_MESSAGE = 'DISCONNECT!'
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

server.bind(ADDR)

#para manejar multiples conexiones, lo vamos a manejar en cada hilo del pricesador
def handle_client(conn, addr):
    print(f"[NEW CONECTION] {addr} connected")
    #el codico del cliente lleg en binario y se decodifica
    #se checkea cuantos bites se estan recibiendo, al estableser el ancho del paque te se recibe por el web socket, tambie sirve como medida de seguridad
    connected = True #con esto se mantiene la conexion
    while connected:
        # se debe establer una condicion de desconexion
        asg_legth = conn.recv(HEADER).decode(FORMAT) #largo del MENSAJE
        #para que no se nos cuelgue la conexion en caso que el largo del mensaje no sea nada
        if asg_length:
            msg_length = int(msg_length) #largo del mensaje
            msg = conn.recv(msg_length).decode(FORMAT)   #se recive el largo del mensaje y se decodifica, entonces para enviar al cliente se vuelve a decodifica
            #se quiere recibir un mensaje del cliente para despues salirnos
            if msg == DISCONNECT_MESSAGE:
                connected = False # con esto salimos del while

            print(f"[{addr}]{msg}") #  se imprime de donde viene el mensaje
            conn.send("Mensaje recibido".encode(FORMAT)) #al socket le mandamos que el mensaje fue recivido
conn.close()

def start(): #con esta funcion se va a estar escuchado en caso que aparezca un cliente
    server.listern() # aca le decimos que escuche
    print(f"[LISTEN] server is linstening on addres {ADDR}")# se dice de que puerto se esta escuchando
    while True:# ahora se hace un ciclo infinito para que siempre este escuchando en caso de que aparezcan mas clientes
        conn , addr = server.accept() # la funcion nos devuelve 2 cosas, un objeto socket donde mantiene una la conexion (conn) y el addres de la coneccion
        # conn nos permite establecer una comunicacion bidireccional con el cliente
        # aca el profe dice que seria bueno que el cliente enviara un handshake para comenzar la transmision de datos
        #el ejericicio se trata de que el cliente debe enviarme su mac anddres, una vez que la mac addres esta verificada, se manda la data (el cliente)
        thread = threading.Thread(target = handle_client(), args= (conn, addr))#volviendo al ejercicio hay que asociar conn , addr = adserver.accept() una vez que esta aceptada, a un hilo un thread
        thread.start()#esto se va a estar ejecutando en "paralelo"
        print(f"[ACTIVE CONNECTIONS] {theading.actaiveCount() - 1}")
print("[STARTING] Sever is running")
start()
