import re

if __name__ == '__main__':
    n = int(input())
    s = [input() for _ in range(n)]
    
    t = int(input())
    for _ in range(t):
        ss = input()
        Regex = '\\b' + ss + '\\b'
        total = 0
        for i in s:
            words = re.findall(Regex, i)
            total += len(words)
        print(total)
