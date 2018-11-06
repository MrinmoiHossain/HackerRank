import re

if __name__ == '__main__':
    n = int(input())
    r = r'^[H|h][I|i]\s[^D|d]'
    for _ in range(n):
        s = input()
        if re.match(r, s):
            print(s)
