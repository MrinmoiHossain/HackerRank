def print_formatted(n):
    space = len(bin(n)) - 2
    for i in range(1, n+1):
        print ("{0:{width}d} {0:{width}o} {0:{width}X} {0:{width}b}".format(i, width=space))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
