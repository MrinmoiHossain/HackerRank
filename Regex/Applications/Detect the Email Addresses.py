import re

if __name__ == '__main__':
    n = int(input())
    ls = set()
    Regex = r'\b(?:\w|\.){1,}@(?:\w|\.*){1,}\b'
    for _ in range(n):
        s = input()
        found = re.findall(Regex, s)
        for i in found:
            if i not in ls:
                ls.add(i)
                
    print(';'.join(sorted(ls)))
