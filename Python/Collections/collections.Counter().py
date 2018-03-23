from collections import Counter

class Main:
    def __init__(self):
        self.n = int(input())
        self.li = Counter(map(int, input().split()))
        self.t = int(input())
        self.ans = 0
        
        for i in range(self.t):
            self.k, self.v = map(int, input().split())
            
            if self.li[self.k]:
                self.ans += self.v
                self.li[self.k] -= 1       
        
    def output(self):
        print(self.ans)
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
