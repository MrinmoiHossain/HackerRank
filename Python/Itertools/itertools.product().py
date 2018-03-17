from itertools import product

class Main:
    def __init__(self):
        self.a = list(map(int, input().split()))
        self.b = list(map(int, input().split()))
        
    def multiplication(self):
        print(*product(self.a, self.b))
    
    def output(self):
        self.multiplication()
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
