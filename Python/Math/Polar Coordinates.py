import cmath

if __name__ == '__main__':
    s = input()                     #input a complex number
    print(abs(complex(s)))          #output the distance in polar coordinate
    print(cmath.phase(complex(s)))  #output the angle in polar coordinate
    
