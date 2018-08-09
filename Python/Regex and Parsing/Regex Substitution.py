import re

class Main:
    def __init__(self):
        self.n = int(input())
        
        for _ in range(self.n):
            self.s = input()
            print(re.sub(r'(?<= )(&&|\|\|)(?= )', lambda x: 'and' if x.group() == '&&' else 'or', self.s))
            
            
if __name__ == '__main__':
    obj = Main()
