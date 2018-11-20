from itertools  import product

if __name__ == '__main__':
    k, m = map(int, input().split())
    
    N = (list(map(int, input().split()))[1:] for _ in range(k))
    results = map(lambda x: sum(i**2 for i in x)% m, product(*N))
    print(max(results))
