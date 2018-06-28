import re

class Main():
    def __init__(self):
        self.s = input()
        self.k = input()
        self.index = 0
        
    def output(self):
        if re.search(self.k, self.s):
            while self.index + len(self.k) < len(self.s):
                self.temp = re.search(self.k, self.s[self.index:])
                print('({0}, {1})'.format(self.index + self.temp.start(), self.index + self.temp.end() - 1))
                self.index += self.temp.start() + 1
        else:
            print('(-1, -1)')

if __name__ == '__main__':
    obj = Main()
    obj.output()
