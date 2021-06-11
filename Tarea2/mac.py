import nmap
class Network(object):
    def __init__(self): #puerta de anlce predeterminada de enrutador o la direccion ip
        ip = input("Please Enter Ip default is ")#se pide la ip
        self.ip = ip

    def networkscanner(self): 
        if len(self.ip) == 0:#si el largo de la direccion ip es 0 (el usuario no ha ingresado ninguna direccion ip)
            network = '192.168.1.1/24'
        else:
            network = self.ip + '/24'

        print("escaniando, por favor espere.....")

        nm = nmap.PortScanner()
        nm.scan(hosts = network, arguments = '-sn')
        hosts_list = [(x, nm[x]['status']['state']) for x in nm.all_hosts()]# se crea una lista de los todos los hosts (lista de hosts es una tupla de la direccion ip)
        for host, status in hosts_list:
            print("Host\t{}".format(host))

if __name__=="main":
    D = Network()
    D.networkscanner()
