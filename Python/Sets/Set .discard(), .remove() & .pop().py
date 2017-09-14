if __name__ == '__main__':
    n = int(input())
    s = set(map(int, input().split()))
    q = int(input())
    
    for i in range (q):
        query = input().split()

        if query[0] == "pop":
            s.pop()
        elif query[0] == "remove":
            s.remove(int(query[1]))
        elif query[0] == "discard":
            s.discard(int(query[1]))
            
    print(sum(s))
