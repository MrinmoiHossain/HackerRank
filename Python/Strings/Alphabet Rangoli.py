import string

def print_rangoli(size):
    alpha = string.ascii_lowercase
    
    li = []
    for i in range(size):
        s = '-'.join(alpha[i:size])
        li.append((s[::-1]+ s[1:]).center(4*n - 3, '-'))
        
    print('\n'.join(li[:0:-1] + li))


if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
