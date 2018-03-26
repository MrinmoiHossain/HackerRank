from collections import OrderedDict

class Main:
    def __init__(self):
        self.n = int(input())
        self.ordered_dict = OrderedDict()
        
        for i in range(0, self.n):
            self.s, self.space, self.k = input().rpartition(' ')
            self.ordered_dict[self.s] = self.ordered_dict.get(self.s, 0) + int(self.k)
    
    def output(self):
        for i in self.ordered_dict:
            print(i, self.ordered_dict[i])
            
if __name__ == '__main__':
    obj = Main()
    obj.output()
