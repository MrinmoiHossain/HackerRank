import numpy as np

class Main:
    def __init__(self):
        self.n, self.m = map(int, input().split())
        self.a = np.array([input().split() for i in range(self.n)], dtype=int)
        self.b = np.array([input().split() for i in range(self.n)], dtype=int)
        
    def Add(self):
        return np.add(self.a, self.b)
    
    def Subtract(self):
        return np.subtract(self.a, self.b)
    
    def Multiply(self):
        return np.multiply(self.a, self.b)
    
    def Divide(self):
        return self.a // self.b
    
    def Mod(self):
        return np.mod(self.a, self.b)
    
    def Power(self):
        return np.power(self.a, self.b)
    
    def output(self):
        print(self.Add())
        print(self.Subtract())
        print(self.Multiply())
        print(self.Divide())
        print(self.Mod())
        print(self.Power())
        
if __name__ == '__main__':
    obj = Main()
    obj.output()

