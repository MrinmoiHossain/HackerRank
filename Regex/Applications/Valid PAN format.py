import re

if __name__ == '__main__':
    n = int(input())
    Regex = r'[A-Z]{5}[0-9]{4}[A-Z]{1}'
    for _ in range(n):
        s = input()
        if re.match(Regex, s):
            print('YES')
        else:
            print('NO')
