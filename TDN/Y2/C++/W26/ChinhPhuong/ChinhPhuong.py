from math import sqrt, floor

n = input()
s = sum(int(i) for i in n)

print("YES" if sqrt(s) == floor(sqrt(s)) else "NO")
