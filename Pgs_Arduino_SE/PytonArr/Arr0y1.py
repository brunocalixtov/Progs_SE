import random as rand

a = int(input("Ingrese el tamaño del arreglo: "))
arr = []
for i in range(a):
    arr.append(rand.randint(0,1))

print("Arreglo de tamaño :",a,",resultado: ",arr)
print("Resultado de la suma :", sum(arr))