import re

if __name__ == '__main__':
    n = int(input())
    s = '\n'.join(input() for _ in range(n))
    
    a = int(input())
    for _ in range(a):
        b = input()
        l = re.findall(b[:len(b)-2] + '[sz]e', s)
        print(len(l))
