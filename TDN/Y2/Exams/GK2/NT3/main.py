from math import sqrt, floor


def checkPrime(n):
	if n <= 7:
		return n > 1 and n != 4 and n != 6
	if n % 2 == 0 or n % 3 == 0:
		return False

	rt = sqrt(n)
	for i in range(5, floor(rt) + 1, 6):
		if n % i == 0 or n % (i + 2) == 0:
			return False

	return True


n = int(input().strip())
ns = []

for i in range(n):
	ns.append(int(input().strip()))

for i in ns:
	print(1 if checkPrime(i) else 0)
