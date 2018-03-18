import re

class Main:
    def __init__(self):
        self.t = int(input())
        for i in range(0, self.t):
            try:
                self.s = re.compile(input())
            except re.error:
                print("False")
            else:
                print("True")
                
if __name__ == '__main__':
    obj = Main()
