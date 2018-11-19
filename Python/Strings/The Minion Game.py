def minion_game(s):
    v = 'AEIOU'
    n = len(s)
    
    kevin = sum(q for c, q in zip(s, range(n, 0, -1)) if c in v)
    stuart = n * (n + 1) // 2 - kevin
    
    if stuart > kevin:
        print('Stuart %d' % stuart)
    elif kevin > stuart:
        print('Kevin %d' % kevin)
    else:
        print('Draw')


if __name__ == '__main__':
    s = input()
    minion_game(s)
