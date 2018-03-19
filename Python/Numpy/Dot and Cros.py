import numpy as np

class Main:
    def __init__(self):
        self.n = int(input())
        self.a = np.array([input().split() for i in range(self.n)], int)
        self.b = np.array([input().split() for i in range(self.n)], int)
        
    def output(self):
        print(np.dot(self.a, self.b))
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
