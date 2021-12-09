import numpy as np
import random
from random import randrange
import matplotlib.pyplot as plt
from matplotlib.pyplot import *
figure(figsize=(8, 8), dpi=80)
def f(x):
    return np.abs((np.sin((2*np.pi*x)))**5-2*(np.cos(3*(np.cos((x/np.pi))**2))**3))
N = 5000
x0 = 0
x1 = 10
x = np.arange(0, 10, 0.00001)
y = f(x)
fmax = max(y)
x_rand = x0 + (x1 - x0)*np.random.random(N)
y_rand = np.random.random(N)*fmax
ind_below = np.where(y_rand < f(x_rand))
ind_above = np.where(y_rand >= f(x_rand))
bel = np.count_nonzero(y_rand < f(x_rand))
abo = np.count_nonzero(y_rand >= f(x_rand))
pts_below = plt.scatter(x_rand[ind_below], y_rand[ind_below], color = "red", s=10)
pts_above = plt.scatter(x_rand[ind_above], y_rand[ind_above], color = "green", s=10)
plt.plot(x, y, color = "blue")
print(np.mean(y*10))
plt.legend((pts_below, pts_above),
           ('Pts below the curve', 'Pts above the curve'),
           loc='lower left',
           ncol=3,
           fontsize=8)
plt.show()