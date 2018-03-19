import numpy as np

class Main:
    def __init__(self):
        self.n, self.m = map(int, input().split())
        self.arr = np.array([input().split() for i in range(self.n)], int)
    
    def getResult(self):
        return np.max(np.min(self.arr, axis=1))
    
    def output(self):
        print(self.getResult())
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
