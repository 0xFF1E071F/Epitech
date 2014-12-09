import socket
import time

username = "Cat_From_Space"
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(("ns-server.epitech.eu", 4242))
data = s.recv(1024)
socket_num = data.split(" ")[1]
random_hash = data.split(" ")[2]
host_c = data.split(" ")[3]
port_c = data.split(" ")[4]
timestamp = data.split(" ")[5]

s.send("auth_ag ext_user none none")
time.sleep(1)
s.send("ext_user_log "+username+" "+random_hash+" none Space")
data = s.recv(1024)
print data

s.close()
