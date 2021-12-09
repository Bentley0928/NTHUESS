import numpy as np
import matplotlib.pyplot as plt
from matplotlib.pyplot import *
figure(figsize=(6, 6), dpi=80)
def f(x):
    return np.sqrt(1-x**2)
N = 5000
x = np.arange(0, 1, 0.0001)
y = f(x)
x_rand = np.random.random(N)
y_rand = np.random.random(N)

ind_below = np.where(y_rand < f(x_rand))
ind_above = np.where(y_rand >= f(x_rand))
bel = np.count_nonzero(y_rand < f(x_rand))
abo = np.count_nonzero(y_rand >= f(x_rand))
pts_below = plt.scatter(x_rand[ind_below], y_rand[ind_below], color = "red", s=10)
pts_above = plt.scatter(x_rand[ind_above], y_rand[ind_above], color = "green", s=10)
plt.plot(x, y, color = "blue")
print("The result is : ",end="")
print(4*(bel)/N)
plt.legend((pts_below, pts_above),
           ('Pts below the curve', 'Pts above the curve'),
           loc='lower left',
           ncol=3,
           fontsize=8)
plt.show()