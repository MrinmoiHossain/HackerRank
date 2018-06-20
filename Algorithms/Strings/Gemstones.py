#!/bin/python3

class Main():
    def __init__(self):
        self.n = int(input())
        
        self.li = []
        for _ in range(self.n):
            self.s = set(input())
            self.li.append(self.s)
            
    def gemstones(self):
        print(len(set.intersection(*self.li)))

if __name__ == '__main__':
    obj = Main()
    obj.gemstones()
