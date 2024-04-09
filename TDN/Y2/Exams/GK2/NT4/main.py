from math import sqrt, floor

primes = [0, 0]

def genPrime(n):
	while len(primes) < n + 1: primes.append(1)

	for i in range(2, n + 1):
		if not primes[i]: continue
		for j in range(i * i, n + 1, i): primes[j] = 0

n = int(input().strip())
mx = 0
ns = []

for i in range(n):
	l, r = [int(i) for i in input().strip().split()]
	mx = max(mx, r)
	ns.append((l, r))

genPrime(mx + 1)

for i in ns:
	for x in range(i[0], i[1] + 1):
		if primes[x]: print(x)
	print()
