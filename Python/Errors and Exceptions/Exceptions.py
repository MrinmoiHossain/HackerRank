class Main:
    def __init__(self):
        self.t = int(input())
        for i in range(0, self.t):
            try:
                self.n, self.m = map(int, input().split())
                print(self.n // self.m)
            except ZeroDivisionError as e:
                print("Error Code:", e)
            except ValueError as e:
                print("Error Code:", e)
            
if __name__ == '__main__':
    obj = Main()
    
