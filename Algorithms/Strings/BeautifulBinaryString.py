#!/bin/python3

class Main():
    def __init__(self):
        self.n = int(input())
        self.s = input()
    
    def output(self):
        print(self.s.count('010'))

if __name__ == '__main__':
    obj = Main()
    obj.output()
