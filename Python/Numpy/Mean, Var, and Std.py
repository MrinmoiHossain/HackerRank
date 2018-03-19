import numpy as np

class Main:
    def __init__(self):
        self.n, self.m = map(int, input().split())
        self.arr = np.array([input().split() for i in range(self.n)], int)
        
    def output(self):
        print(np.mean(self.arr, axis=1), np.var(self.arr, axis=0), np.std(self.arr), sep='\n')
        
if __name__ == '__main__':
    obj = Main()
    obj.output()

