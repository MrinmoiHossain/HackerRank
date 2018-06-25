def wrapper(f):
    def fun(l):
        f(["+91 "+ a[-10:-5] + " " + a[-5:] for a in l])
    return fun

@wrapper
def sort_phone(l):
    print(*sorted(l), sep='\n')

if __name__ == '__main__':
    l = [input() for _ in range(int(input()))]
    sort_phone(l) 
