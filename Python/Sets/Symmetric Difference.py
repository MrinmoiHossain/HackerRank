if __name__ == '__main__':
    n = int(input())
    l = list(map(int, input().split()))
    a = set(l)

    m = int(input())
    l = list(map(int, input().split()))
    b = set(l)
    
    m = a.difference(b)
    p = b.difference(a)
    c = list(p.union(m))
    c.sort()
    for i in range (len(c)):
        print(c[i])
