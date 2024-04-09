from math import floor, sqrt

t = int(input().strip())

for i in range(t):
	n, k = [int(i) for i in input().strip().split()]
	d = []

	while n % 2 == 0:
		d.append(2)
		n /= 2;

	for i in range(3, floor(sqrt(n)) + 1, 2):
		while n % i == 0:
			d.append(i)
			n /= i

	if n > 2: d.append(n)

	print(int(d[k - 1]) if k <= len(d) else -1)
