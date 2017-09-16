if __name__ == '__main__':
    l = []
    for _ in range(int(input())):
        l.append([input(), float(input())])
       
    sh = sorted(set([x[1] for x in l]))
    for name in sorted(x[0] for x in l if x[1] == sh[1]):
        print(name)
