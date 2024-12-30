from math import sqrt

primes = [0, 0]


def genPrime(n):
	while len(primes) < n + 1:
		primes.append(1)

	for i in range(2, n + 1):
		if not primes[i]:
			continue
		for j in range(i * i, n + 1, i):
			primes[j] = 0


n = int(input().strip())
genPrime(max(100, int(sqrt(n)) + 50))

for i in range(int(sqrt(n)), n):
	if primes[i] and i * i >= n:
		print(i * i)
		break
