from math import floor, sqrt

t = int(input().strip())

for i in range(t):
	n = int(input())
	d = []

	while n % 2 == 0:
		d.append(2)
		n /= 2

	for i in range(3, floor(sqrt(n)) + 1, 2):
		while n % i == 0:
			d.append(i)
			n /= i

	if n > 2:
		d.append(n)

	s = set(d)

	for i in sorted(s):
		print(f"{int(i)} {int(d.count(i))}", end=" ")

	print()
