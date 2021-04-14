cube = lambda x: x ** 3


def fibonacci(n):
    List = []
    for i in range(0,n):
        if i==0:
            List.append(0)
            continue
        if i==1:
            List.append(1)
            continue
        else:            
            List.append(List[i-1]+List[i-2])
    return List


if __name__ == '__main__':
    n = int(raw_input())
    print map(cube, fibonacci(n))
