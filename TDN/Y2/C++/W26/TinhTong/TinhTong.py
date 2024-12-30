import re

print(sum([int(i) for i in filter(lambda i: i != "", re.split(r"[^\d]", input()))]))
