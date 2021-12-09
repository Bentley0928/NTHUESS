class Consumer:
    def __init__(self, w):
        self.wealth = w
    def earn(self, y):
        self.wealth = self.wealth + y
    def spend(self, x):
        new_wealth=self.wealth-x
        if new_wealth < 0:
            print("Insufficient funds")
        else:
            self.wealth = new_wealth
c1 = Consumer(100)
c1.earn(10)
c1.spend(20)
c1.earn(10)
c1.spend(20)
print("Object-oriented programming")
print("The wealth of the consumer at this moment =",c1.wealth)