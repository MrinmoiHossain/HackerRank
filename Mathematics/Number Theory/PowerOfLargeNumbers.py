def solve(a, b):
    print(pow(a, b, 10**9+7))

if __name__ == '__main__':
    t = int(input())

    for _ in range(t):
        a, b = map(int, input().split())

        result = solve(a, b)
