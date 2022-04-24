import socket
import time 
host_ismi = "localhost"
port =4444

internet_soketi = socket.socket()
internet_soketi.connect((host_ismi,port))


print("baglanti sağlandi!! {}:{}".format(host_ismi,port))

mesaj=input("----::")
print("server bekleniyor..")

while mesaj != "cikis":
    internet_soketi.send(mesaj.encode())
    gelen_veri = internet_soketi.recv(1024).decode()

    print("SERVER : "+ gelen_veri)

    mesaj = input("----::")
    print("Server bekleniyor ...")

internet_soketi.close()