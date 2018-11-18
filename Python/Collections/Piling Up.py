from collections import deque

if __name__ == '__main__':
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        
        a = deque(map(int, input().split()))
        b = 'Yes'
        if max(a) not in (a[0], a[-1]):
            b = 'No'
        print(b)
