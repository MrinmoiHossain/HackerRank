import re

if __name__ == '__main__':
    n = int(input())
    tags = r'<\s*(\w+)'
    ls = set()
    for _ in range(n):
        s = input()
        found = re.findall(tags, s)
        for i in found:
            if i not in ls:
                ls.add(i)
                
    print(';'.join(sorted(ls)))
