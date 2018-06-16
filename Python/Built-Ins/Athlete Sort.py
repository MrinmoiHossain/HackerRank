#!/bin/python3

import math
import os
import random
import re
import sys

class Main():
    def __init__(self):
        self.n, self.m = map(int, input().split())
        
        self.data = []
        for i in range(self.n):
            self.data.append(list(map(int, input().split())))
            
        self.k = int(input())
        
    def output(self):
        self.data.sort(key = lambda x : x[self.k])
        for li in self.data:
            print(*li, sep=' ')


if __name__ == '__main__':
    obj = Main()
    obj.output()
