import numpy as np

class Main:
    def __init__(self):
        self.n, self.m = map(int, input().split())
        self.np_array = np.array([input().split() for i in range(self.n)], int)
    
    def transposeArray(self):
        return np.transpose(self.np_array)
    
    def flattenArray(self):
        return self.np_array.flatten()
    
    def output(self):
        print(self.transposeArray())
        print(self.flattenArray())
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
