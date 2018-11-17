from collections import Counter, OrderedDict
class OrderedCounter(Counter, OrderedDict):
    pass

class Main:
    def __init__(self):
        self.n = int(input())
        
        self.li = OrderedCounter(input() for _ in range(self.n))
                
    def output(self):
        print(len(self.li))
        print(*self.li.values())
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
