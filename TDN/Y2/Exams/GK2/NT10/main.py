from math import sqrt, floor

primes = [0, 0]


def genPrime(n):
	while len(primes) < n + 1:
		primes.append(1)

	for i in range(2, n + 1):
		if not primes[i]:
			continue
		for j in range(i * i, n + 1, i):
			primes[j] = 0


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


l, r = [int(i) for i in input().strip().split()]
genPrime(r)
found = False
ans = []

for i in range(l, r + 1):
	n = i
	flag = True

	while n > 0:
		if not primes[n]:
			flag = False
			break
		n //= 10

	if flag == False:
		continue
	else:
		ans.append(str(i))

if len(ans) == 0:
	print("NO")
else:
	print(" ".join(ans))
