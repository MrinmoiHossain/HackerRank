from itertools import permutations

class Main:
    def __init__(self):
        self.s, self.k = input().split()
        
    def Permutation(self):
        for i in permutations(sorted(self.s), int(self.k)):
            print(''.join(i))
        
    def output(self):
        self.Permutation()
        
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
