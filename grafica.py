import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("ecDiferenciales.txt")
N=3.0/0.1
x = np.linspace(0,3,N)
plt.scatter(data[:,0],data[:,1], label="solucion")
plt.plot(x,np.exp(-x),c="red", label = "funcion")
plt.xlabel("X")
plt.ylabel("Y")
plt.title("Ecuacion diferencial de primer orden")
plt.legend()
plt.savefig("grafica1.png")
