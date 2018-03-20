import numpy as np

class Main:
    def __init__(self):
        self.a = np.array(list(map(int, input().split())))
        self.b = np.array(list(map(int, input().split())))
        
    def output(self):
        print(np.inner(self.a, self.b), np.outer(self.a, self.b), sep='\n')
        
        
if __name__ == '__main__':
    obj = Main()
    obj.output()

