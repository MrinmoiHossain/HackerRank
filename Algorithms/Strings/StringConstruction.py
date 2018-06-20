#!/bin/python3

class Main():
    def __init__(self):
        self.n = int(input())
        
        for _ in range(self.n):
            self.s = set(input())
            print(len(self.s))

if __name__ == '__main__':
    obj = Main()
