class Main():
    def __init__(self):
        self.s = input()
        
    def Sort(self):
        self.s = sorted(self.s, key = lambda x : (x.isdigit() and int(x) % 2 == 0, x.isdigit(), x.isupper(), x.islower(), x))
        print(''.join(self.s))
        
if __name__ == '__main__':
    obj = Main()
    obj.Sort()
