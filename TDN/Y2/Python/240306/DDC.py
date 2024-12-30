k = int(input().strip().split(" ")[1])
ns = [int(i) for i in input().strip().split(" ")]
c = 0

for i in range(1, len(ns)):
	ns[i] += ns[i - 1]

ns.insert(0, 0)

for i in range(1, len(ns)):
	for x in range(i, len(ns) - i + 1):
		if ns[x] - ns[x - i] <= k:
			c += 1

print(c)
