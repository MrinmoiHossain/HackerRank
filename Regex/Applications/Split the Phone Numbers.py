import re

if __name__ == '__main__':
    n = int(input())
    Regex = r'(\d+)'
    for _ in range(n):
        s = input()
        a = re.findall(Regex, s)
        print('CountryCode=%s,LocalAreaCode=%s,Number=%s' %(str(a[0]), str(a[1]), str(a[2])))
