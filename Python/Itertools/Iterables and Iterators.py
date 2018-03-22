from itertools import combinations

class Main:
    def __init__(self):
        self.n = int(input())
        self.s = list(input().split())
        self.k = int(input())
        
        self.com = list(combinations(self.s, self.k))
        self.fil = filter(lambda x: 'a' in x, self.com)
        
    def output(self):
        print("%0.3f" % (len(list(self.fil)) / len(self.com)))
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
