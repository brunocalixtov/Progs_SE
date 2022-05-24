import random as rand
def funcion(a, m, n):
    sum = 0
    for i in range (m):
        for j in range(n):
            sum += a [i][j]
    print(sum)

n = int(input("Ingrese el tamaño del arreglo: "))

m = int(input("Cuantos arreglos creará?: "))

arreglos = []
a = []
sum = 0
for i in range(m):
    for j in range(n):
        arreglos.append(rand.randint(0, 1))
    a.append(arreglos)
    arreglos = []
print("El resutado es: ")
print(a)
print(funcion(a,m,n))