import numpy as np

class Main:
    def __init__(self):
        self.n, self.m = map(int, input().split())
        self.np_array = np.array([input().split() for i in range(self.n)], int)
    
    def sumOfArray(self):
        return np.sum(self.np_array, axis = 0)
    
    def productOfArray(self):
        return np.product(self.sumOfArray(), axis = 0)
        
    def output(self):
        print(self.productOfArray())
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
