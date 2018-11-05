Regex_Pattern = r'^([a-z]\w\s\W\d\D[A-Z][a-z|A-Z][aeiouAEIOU]\S)\1$'

import re

print(str(bool(re.search(Regex_Pattern, input()))).lower())
