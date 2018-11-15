import re

if __name__ == '__main__':
    n = int(input())
    nline = '\n'.join(input() for _ in range(n))
        
    q = int(input())
    
    for _ in range(q):
        s = input()
        print(len(re.findall(r'\B(%s)\B' % s, nline)))
