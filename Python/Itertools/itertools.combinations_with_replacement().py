from itertools import combinations_with_replacement

class Main:
    def __init__(self):
        self.a, self.n = input().split()
        
    def output(self):
        for i in combinations_with_replacement(sorted(self.a), int(self.n)):
            print(''.join(i))
        
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
