class Main:
    def __init__(self):
        self.n = int(input())
        self.li = list(map(int, input().split()))
        self.s = set(self.li)
        self.a = int(((sum(self.s) * self.n) - sum(self.li)) / (self.n - 1))
        print(self.a)
        
if __name__ == '__main__':
    obj = Main()
