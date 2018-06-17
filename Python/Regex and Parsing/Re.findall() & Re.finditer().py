import re

class Main():
    def __init__(self):
        self.s = input()
        self.c = 'qwrtypsdfghjklzxcvbnm'
        
    def output(self):
        self.ss = re.findall(r'(?<=[' + self.c + '])([aeiou]{2,})(?=[' + self.c +'])', self.s, flags = re.I)
        print('\n'.join(self.ss or ['-1']))
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
