from xml.sax import xmlreader


uzaklıklar=[]
konumlar= open("konumlar.txt","r")
uzaklılar=uzaklıklar.append(konumlar.readlines())

print(uzaklıklar[0][0])
x=uzaklıklar[0][0]
print(x)
x=x.split(' ')
print(x)
x[0]=float(x[0])
x[2]=float(x[2])
x[4]=float(x[4])
x[6]=float(x[6])
x[8]=float(x[8])
x[10]=float(x[10])
x[12]=float(x[12])
x.pop(1)
x.pop(2)
x.pop(3)
x.pop(4)
x.pop(5)
x.pop(6)
x.pop(7)

print(x)
x.sort()

print(x)
