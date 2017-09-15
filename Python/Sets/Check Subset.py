if __name__ == '__main__':
    for i in range(int(input())):
        a = int(input())
        A = set(input().split()) 
        b = int(input())
        B = set(input().split())

        print(A.issubset(B))    #A <= B
