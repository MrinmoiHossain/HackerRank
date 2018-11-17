import re
import sys

if __name__ == '__main__':
    s = sys.stdin.read()
    
    Regex = r'question-summary-(\w\w\w\w\w)".*?class="question-hyperlink">(.+?)</a>.*?class=\"relativetime\">(.+?)</span>'
    li = re.findall(Regex, s, re.DOTALL)
    
    for a in li:
        print(';'.join(a))
