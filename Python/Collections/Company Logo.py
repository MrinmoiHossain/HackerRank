#!/bin/python3
from collections import Counter, OrderedDict

class OrderedCounter(Counter, OrderedDict):
    pass

class Main:
    def __init__(self):
        self.s = input()
        self.data = OrderedCounter(sorted(self.s))
        
    def output(self):
        for t in self.data.most_common(3):
            print(*t)



if __name__ == '__main__':
    s = Main()
    s.output()
