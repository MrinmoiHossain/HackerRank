if __name__ == '__main__':
    n = int(input())
    a = set(input().split(" "))
    
    m = int(input())
    b = set(input().split(" "))
    
    a = a.symmetric_difference(b) #a ^= b
    
    print(len(a))
