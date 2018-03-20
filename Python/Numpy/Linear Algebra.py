import numpy as np

class Main:
    def __init__(self):
        self.n = int(input())
        self.arr = np.array([input().split() for i in range(self.n)], float)
        
    def output(self):
        print(np.linalg.det(self.arr))
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
