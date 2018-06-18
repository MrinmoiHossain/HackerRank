import re

class Main():
    def __init__(self):
        self.n = int(input())
        
        for i in range(self.n):
            self.s = input()
            print('YES' if re.match(r'[789]\d{9}$', self.s) else 'NO')
            
            
if __name__ == '__main__':
    obj = Main()
