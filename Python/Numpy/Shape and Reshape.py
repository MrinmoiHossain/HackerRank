import numpy as np

class Main:
    def __init__(self):
        self.li = list(map(int, input().split()))
        self.np_li = np.array(self.li)
        
    def output(self):
        print(np.reshape(self.np_li, (3,3)))
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
