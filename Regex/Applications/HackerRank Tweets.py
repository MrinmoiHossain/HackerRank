import re

if __name__ == '__main__':
    n = int(input())
    con = 0
    for _ in range(n):
        s = input().upper()
        if 'HACKERRANK' in s:
            con += 1
            
    print(con)
