class Main:
    def __init__(self):
        self.n = int(input())
        self.li = [2]
        
    def calculate(self):
        for i in range(self.n - 1):
            self.li.append(3 * self.li[i] // 2)
        return sum(self.li)
    
    def output(self):
        print(self.calculate())
        
if __name__ == '__main__':
    obj = Main()
    obj.output()
