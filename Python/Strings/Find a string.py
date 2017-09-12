def count_substring(s, a):      
    if len(s) < len(a):
        return 0
    else:
        con = 0
        for i in range (len(s) - len(a) + 1):
            if s[i : i+len(a)] == a:
                con += 1
        return con


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
