import numpy as np

class Main:
    def __init__(self):
        self.arr = np.array(list(map(float, input().split())))
        
    def output(self):
        print(np.floor(self.arr), np.ceil(self.arr), np.rint(self.arr), sep='\n')
        
if __name__ == '__main__':
    obj = Main()
    obj.output()

