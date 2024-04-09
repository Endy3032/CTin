from math import sqrt, floor

primes = [0, 0]
def genPrime(n):
	while len(primes) < n + 1: primes.append(1)

	for i in range(2, n + 1):
		if not primes[i]: continue
		for j in range(i * i, n + 1, i): primes[j] = 0

n, s = [int(i) for i in input().strip().split()]
genPrime(n + 1)

for i in range(2, n + 1):
	if primes[i] and sum([int(x) for x in str(i)]) == s:
		print(i)
