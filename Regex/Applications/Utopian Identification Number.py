import re

if __name__ == '__main__':
    n = int(input())
    Regex = r'^[a-z]{0,3}[0-9]{2,8}[A-Z]{3,}'
    for _ in range(n):
        s = input()
        if re.match(Regex, s):
            print('VALID')
        else:
            print('INVALID')
