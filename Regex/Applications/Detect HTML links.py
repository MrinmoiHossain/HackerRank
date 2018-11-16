import re

if __name__ == '__main__':
    n = int(input())
    Regex = r'<a href="(.*?)".*?>([\w ,./]*)(?=</)'
    for _ in range(n):
        s = input()
        links = re.findall(Regex, s)
        for link, att in links:
            print('%s,%s' % (link, att.strip()))
