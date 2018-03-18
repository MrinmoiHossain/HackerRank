import re
import sys

class Main:
    def __init__(self):
        self.s = ''.join(sys.stdin.readlines())
        
    def output(self):
        if 'java' in self.s:
            print("Java")
        elif '#include' in self.s:
            print("C")
        else:
            print("Python")
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
