from collections import namedtuple

class Main:
    def __init__(self):
        self.n = int(input())
        self.s = input()
        self.total = 0.0
        self.Student = namedtuple('Student', self.s)
        
        for i in range(self.n):
            self.students = self.Student(*input().split())
            self.total += int(self.students.MARKS)
            
    def output(self):
        print("%0.2f" % (self.total / self.n))
        
if __name__ == '__main__':
    obj = Main()
    obj.output()

