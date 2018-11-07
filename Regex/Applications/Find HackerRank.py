import re

if __name__ == '__main__':
    n = int(input())
    for _ in range(n):
        s = input()
        if re.match(r'^hackerrank$', s):
            print(0)
        elif re.match(r'[ \w]+\shackerrank$', s):
            print(2)
        elif re.match(r'^hackerrank\s[ \w]+', s):
            print(1)
        else:
            print(-1)
