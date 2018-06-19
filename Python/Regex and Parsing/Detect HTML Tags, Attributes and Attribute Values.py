from html.parser import HTMLParser

class MyHTMLParser(HTMLParser):
    def handle_starttag(self, tag, attrs):
        print(tag)
        for li in attrs:
            print('->', li[0], '>', li[1])


if __name__ == '__main__':
    n = int(input())
    s = ''
    for _ in range(n):
        t = input()
        s += t
        
    obj = MyHTMLParser()
    obj.feed(s)
