import re

class Main():
    def __init__(self):
        self.n = int(input())
        
        for i in range(self.n):
            self.s = input()
            self.pattern = ''
            self.temp = all([re.search(r, self.s) for r in [r'[A-Za-z0-9]{10}',r'([A-Z].*){2}',r'([0-9].*){3}']]) and not re.search(r'.*(.).*\1', self.s)
            
            print('Valid' if self.temp else 'Invalid')
            
            
if __name__ == '__main__':
    obj = Main()
