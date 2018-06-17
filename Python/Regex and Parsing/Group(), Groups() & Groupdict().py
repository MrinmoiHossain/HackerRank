import re

class Main():
    def __init__(self):
        self.s = input()
        self.li = re.search(r'([a-zA-Z0-9])\1+', self.s)
        
    def output(self):
        print(self.li.group(1) if self.li else -1)
        

if __name__ == '__main__':
    obj = Main()
    obj.output()
