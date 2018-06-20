#!/bin/python3

class Main():
    def __init__(self):
        self.s = input()
        
        print(sum(map(str.isupper, self.s)) + 1)

if __name__ == '__main__':
    obj = Main()
