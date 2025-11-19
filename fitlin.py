from   iminuit import Minuit
import numpy as np
import matplotlib.pyplot as plt

def f(x,p):
    return p[1]*x+p[0]

def fcn(par):
    val = 0
    for i in range(0,len(x)):
        val = val + ((y[i]-f(x[i],par))/ey[i])**2
    return val

# Acquisizione dati
x,y,ex,ey = np.loadtxt('pendolo.dat',usecols=(0,1,2,3),unpack=True)

## Chiamare Minuit 
## Stampare la matrice di correlazione (correlation)
