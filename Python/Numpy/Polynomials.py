import numpy as np

class Main:
    def __init__(self):
        self.arr = np.array(input().split(), float)
        self.n = int(input())
        
    def output(self):
        print(np.polyval(self.arr, self.n))
        
if __name__ == '__main__':
    obj = Main()
    obj.output()

