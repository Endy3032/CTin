from math import sqrt, floor

primes = [0, 0]

def checkPrime(n):
	if (n <= 7): return n > 1 and n != 4 and n != 6
	if (n % 2 == 0 or n % 3 == 0): return False

	rt = sqrt(n)
	for i in range(5, floor(rt) + 1, 6):
		if (n % i == 0 or n % (i + 2) == 0): return False

	return True

def genPrime(n):
	while len(primes) < n + 1: primes.append(1)

	for i in range(2, n + 1):
		if not primes[i]: continue
		for j in range(i * i, n + 1, i): primes[j] = 0

n = int(input().strip())
ns = []
mx = 0

for i in range(n):
	a = int(input().strip())
	ns.append(a)
	mx = max(mx, a)

genPrime(mx)

for i in ns:
	print(primes[i])