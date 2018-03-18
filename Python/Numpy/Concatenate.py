import numpy as np

class Main:
    def __init__(self):
        self.n, self.m, self.p = map(int, input().split())
        self.firstArray = np.array([input().split() for i in range(self.n)], int)
        self.secondArray = np.array([input().split() for i in range(self.m)], int)
        
    def concatenateArray(self):
        return np.concatenate((self.firstArray, self.secondArray))
    
    def output(self):
        print(self.concatenateArray())
        
if __name__ == '__main__':
    obj = Main()
    obj.output()

