from itertools import combinations

class Main:
    def __init__(self):
        self.s, self.n = input().split()
        
    def output(self):
        for j in range(1, int(self.n) + 1):
            for i in combinations(sorted(self.s.upper()), j):
                print(''.join(i))
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
