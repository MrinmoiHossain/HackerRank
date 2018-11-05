Regex_Pattern = r'\b[aeiouAEIOU][A-Za-z]*\b'	# Do not delete 'r'.

import re

print(str(bool(re.search(Regex_Pattern, input()))).lower())
