import re

if __name__ == '__main__':
    n = int(input())
    r = r'^[_.]\d+[a-z|A-Z]*[_]?$'
    for _ in range(n):
        s = input()
        if re.match(r, s):
            print('VALID')
        else:
            print('INVALID')
