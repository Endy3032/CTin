t = int(input())

for x in range(t):
	n = int(input())

	while len(str(n)) != 1:
		n = sum(int(i) for i in str(n))

	print(n)
