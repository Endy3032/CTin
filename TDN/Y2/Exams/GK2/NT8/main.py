from math import floor

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
found = False
genPrime(n)

for i in range(2, floor(len(primes) / 2)):
	if primes[i] and primes[n - i]:
		print(i, n - i)
		found = True

if not found:
	print(n)
