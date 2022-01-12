import matplotlib.pyplot as plt
class Chaos:
    def __init__(self, x0, r):
        self.x, self.r=x0,r
    def update(self):
        self.x = self.r * self.x *(1-self.x)
    def generate_sequence(self, n):
        path = []
        for i in range(n):
            path.append(self.x)
            self.update()
        return path
fig, ax = plt.subplots()
x0=0.1
r=2.5
chaos = Chaos(x0,r)
while r<4:
    chaos.r=r
    t = chaos.generate_sequence(1000)[950:]
    ax.plot([r]*len(t), t, 'b.', ms=0.6)
    r=r+0.005
ax.set_title('Plot the Tail if Transition Rule: $x_{t+2}=r*x_t*(1-x_t)$')
ax.set_xlabel('Parameter ($r$)')
ax.set_ylabel('State Space($x_t$)')
plt.show()