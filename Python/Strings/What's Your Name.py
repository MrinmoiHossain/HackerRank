def print_full_name(a, b):
    print("Hello %s %s! You just delved into python." % (a, b))
    return

if __name__ == '__main__':
    first_name = raw_input()
    last_name = raw_input()
    print_full_name(first_name, last_name)
