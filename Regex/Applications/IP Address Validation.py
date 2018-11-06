import re

if __name__ == '__main__':
    n = int(input())
    IPv4_pattern = r'^((\d|[1-9]\d|1\d\d|2[0-4]\d|25[0-5])\.){3}(\d|[1-9]\d|1\d\d|2[0-4]\d|25[0-5])$'
    for _ in range(n):
        s = input()
        if re.match(IPv4_pattern, s):
            print('IPv4')
        elif re.match(r'^([0-9a-f]{1,4}:){7}[0-9a-f]{1,4}$', s):
            print('IPv6')
        else:
            print('Neither')
