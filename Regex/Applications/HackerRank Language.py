import re

if __name__ == '__main__':
    n = int(input())
    s = 'C|CPP|JAVA|PYTHON|PERL|PHP|RUBY|CSHARP|HASKELL|CLOJURE|BASH|SCALA|ERLANG|CLISP|LUA|BRAINFUCK|JAVASCRIPT|GO|D|OCAML|R|PASCAL|SBCL|DART|GROOVY|OBJECTIVEC'
    Regex = r'^[1-9]\d{4}\s' + '(' + s + ')$'
    for _ in range(n):
        s = input()
        if re.match(Regex, s):
            print('VALID')
        else:
            print('INVALID')
