import math

if __name__ == '__main__':
    a = int(input())
    b = int(input())
    
    print(str(int(round(math.degrees(math.atan2(a, b))))) + '°')
