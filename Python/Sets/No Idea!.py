class Main:
    def __init__(self):
        self.n, self.m = map(int, input().split())
        self.a = list(map(int, input().split()))
        self.b = set(map(int, input().split()))
        self.c = set(map(int, input().split()))
        
    def output(self):
        print(sum([(i in self.b) - (i in self.c) for i in self.a]))
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
