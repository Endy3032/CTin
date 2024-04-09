from math import floor, sqrt

t = int(input().strip())

for i in range(t):
	n_ = input().strip()
	n = int(n_)
	s1 = sum(int(i) for i in str(n))
	d = []

	while n % 2 == 0:
		d.append(2)
		n /= 2;

	for i in range(3, floor(sqrt(n)) + 1, 2):
		while n % i == 0:
			d.extend(int(x) for x in str(int(i)))
			n /= i

	if n > 2: d.extend(int(i) for i in str(int(n)))

	s2 = sum(d)

	print(1 if s1 == s2 and "".join(map(str, d)) != n_ else 0)
