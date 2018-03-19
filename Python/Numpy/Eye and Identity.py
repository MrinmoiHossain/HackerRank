import numpy as np

class Main:
    def __init__(self):
        self.n, self.m = map(int, input().split())
        
    def output(self):
        print(np.eye(self.n, self.m, k=0))
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
