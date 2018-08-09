import re

class Main:
    def __init__(self):
        self.n = int(input())
        
        for _ in range(self.n):
            self.s = input()
            self.matchs = re.findall(':?.(#[0-9a-fA-F]{6}|#[0-9a-fA-F]{3})', self.s)
            if self.matchs:
                print(*self.matchs, sep='\n')
            
if __name__ == '__main__':
    obj = Main()
