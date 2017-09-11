def capitalize(string):
    
    for s in string.split(" "):
        string = string.replace(s, s.capitalize())
    
    return string


if __name__ == '__main__':
    string = input()
    capitalized_string = capitalize(string)
    print(capitalized_string)
