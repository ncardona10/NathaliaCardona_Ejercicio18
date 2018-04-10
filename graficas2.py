import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("ecDiferenciales2.txt")
N=10/0.1
x = np.linspace(0,10,N)
plt.scatter(data[:,0],data[:,1], label="solucion")
#plt.plot(x,np.exp(-x),c="red", label = "funcion")
plt.xlabel("X")
plt.ylabel("Y")
plt.title("Ecuacion diferencial de segundo orden")
plt.legend()
plt.savefig("grafica2.png")
plt.close()
plt.scatter(data[:,1],data[:,2])
plt.title("y vs z")
plt.xlabel("Y")
plt.ylabel("Z")
plt.savefig("grafica3.png")
