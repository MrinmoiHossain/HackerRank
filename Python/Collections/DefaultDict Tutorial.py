from collections import defaultdict

class Main:
    def __init__(self):
        self.n, self.m = map(int, input().split())
        self.dl = defaultdict(lambda: -1)
        self.serial = 1
        
        for i in range(1, self.n + 1):
            self.temp = input()
            self.dl[self.temp] = self.dl[self.temp] + ' ' + str(i) if self.temp in self.dl else str(i)
        
    def output(self):
        for i in range(self.m):
            print(self.dl[input()])
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
