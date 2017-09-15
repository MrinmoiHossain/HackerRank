if __name__ == '__main__':
    n = int(input())
    s = set(map(int, input().split(" ")))
    
    q = int(input())
    
    for i in range (q):
        a, b = input().split(" ")
        c = set(map(int, input().split(" ")))
        eval('s.' + a + '(c)')
        
    print(sum(s))
