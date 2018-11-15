import re

if __name__ == '__main__':
    n = int(input())
    Regex = r'https?://(?:www\.|ww2\.)?([a-zA-Z\d-]+(?:\.[a-zA-Z\d-]+)+)'
    out = set()
    for _ in range(n):
        s = input()
        temp = re.findall(Regex, s)
        for i in temp:
            if i not in out:
                out.add(i)
        
    print(';'.join(sorted(out)))
