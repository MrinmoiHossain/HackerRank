from collections import deque

class Main:
    def __init__(self):
        self.d = deque()
        self.n = int(input())
        
        for _ in range(self.n):
            self.s = input().split()
            getattr(self.d, self.s[0])(*[self.s[1]] if len(self.s)> 1 else [])
            
    def output(self):
        print(*[i for i in self.d])

if __name__ == '__main__':
    obj = Main()
    obj.output()
