import re

class Main:
    def __init__(self):
        self.test = re.compile(r'^(?!.*(\d)(-?\1){3})[456]\d{3}(?:-?\d{4}){3}$')
        for _ in range(int(input())):
            self.s = input()
            print("Valid" if self.test.search(self.s) else "Invalid")
            
            
if __name__ == '__main__':
    obj = Main()
