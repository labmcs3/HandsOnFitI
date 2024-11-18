from   iminuit import Minuit
from   numpy   import *
import matplotlib.pyplot as plt

def f(x,b,a):
    return a*x+b

def fcn(a,b):
    val = 0
    for i in range(0,len(x)):
        val = val + ((y[i]-f(x[i],a,b))/ey[i])**2
    return val

# Acquisizione dati
x,y,ex,ey = loadtxt('pendolo.dat',usecols=(0,1,2,3),unpack=True)

## Chiamare Minuit 
## Stampare la matrice di correlazione (correlation)
## Esplorare la funzione draw_mncontour un contour
## Esplorare la funzione draw_mnmatrix per fare la matrice dei contour

