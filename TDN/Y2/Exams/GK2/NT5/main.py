from math import sqrt, floor

dif = {
	0: 5,
	1: 4,
	2: 3,
	3: 2,
	4: 1,
	5: 0,
}


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

for i in range(n + dif[n % 6], 0, -6):
	if i > n:
		continue
	if checkPrime(i):
		print(i)
		break
	elif checkPrime(i + 2) and i + 2 <= n:
		print(i + 2)
		break
