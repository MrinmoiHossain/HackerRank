if __name__ == '__main__':
    s = input()
    
    alpha = False
    digit = False
    lowerCase = False
    upperCase = False
    
    for c in s:
        if not alpha and c.isalpha():
            alpha = True
        if not digit and c.isdigit():
            digit = True
        if not lowerCase and c.islower():
            lowerCase = True
        if not upperCase and c.isupper():
            upperCase = True
            
    print(alpha or digit)
    print(alpha)
    print(digit)
    print(lowerCase)
    print(upperCase)
