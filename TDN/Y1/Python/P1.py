# Nhập a, b, c
# Trả lời số nghiệm của phương trình ax^2 +  bx + c = 0

from math import sqrt

s = input("Input a, b, c > ").split()
a, b, c = int(s[0]), int(s[1]), int(s[2])

delta = b**2 - 4 * a * c

if delta < 0:
	print("No real root")
elif delta == 0:
	print(f"1 real root: {-b/(a * 2)}")
else:
	print(f"2 real roots: {(-b + sqrt(delta)) / (a * 2)}, {(-b - sqrt(delta)) / (a * 2)}")
