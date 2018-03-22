from itertools import groupby

class Main:
    def __init__(self):
        self.s = input()
        
    def output(self):
        for i, j in groupby(self.s):
            print("({first}, {second})".format(first=len(list(j)), second=i), end = ' ')
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
