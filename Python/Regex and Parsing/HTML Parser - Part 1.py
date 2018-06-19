from html.parser import HTMLParser

# create a subclass and override the handler methods
class MyHTMLParser(HTMLParser):     
    def handle_starttag(self, tag, attrs):
        print("Start :", tag)
        for li in attrs:
            print('->', li[0], '>', li[1])
            
    def handle_endtag(self, tag):
        print("End   :", tag)
    def handle_startendtag(self, tag, attrs):
        print("Empty :", tag)
        for li in attrs:
            print('->', li[0], '>', li[1])
        

if __name__ == '__main__':
    n = int(input())
    s = ''
    for i in range(n):
        temp = input()
        s += temp   
    obj = MyHTMLParser()
    obj.feed(s)
