from math import floor, sqrt

t = int(input().strip())

for i in range(t):
	n = int(input())
	d = []

	while n % 2 == 0:
		d.append(2)
		n /= 2;

	for i in range(3, floor(sqrt(n)) + 1, 2):
		while n % i == 0:
			d.append(int(i))
			n /= i

	if n > 2: d.append(int(n))
  
	print("*".join(map(str, sorted(d))))
