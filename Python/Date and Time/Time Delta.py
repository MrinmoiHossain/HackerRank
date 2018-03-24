#!/bin/python3

from datetime import datetime as dt

class Main:
    def __init__(self):
        self.t = int(input())
        
    def time_delta(self):
        return int(abs(self.t1 - self.t2).total_seconds())
    
    def output(self):
        fmt = '%a %d %b %Y %H:%M:%S %z'
        for i in range(self.t):
            self.t1 = dt.strptime(input(), fmt)
            self.t2 = dt.strptime(input(), fmt)
            print(self.time_delta())


if __name__ == "__main__":
    obj = Main()
    obj.output()

