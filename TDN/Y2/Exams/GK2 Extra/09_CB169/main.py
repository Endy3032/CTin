t = int(input().strip())
ts = []
mx = 0

for i in range(t):
	input()
	d = list(map(int, input().split()))
	mx = max(mx, sum(d))

	for i in range(1, len(d)):
		d[i] += d[i - 1]

	ts.append([0, *d])

p = [1] * (mx + 1)
p[0] = 0
p[1] = 0

for i in range(2, mx + 1):
	if not p[i]: continue
	for j in range(i * i, mx + 1, i): p[j] = 0

for ls in ts:
	mx = 0
	mxl = 0
	l = 0

	for x in range(1, len(ls)):
		if x > 1 and ls[x] - ls[x - 1] < ls[x - 1]:
			l = x
		else:
			sm = ls[x] - ls[l]
			if sm > mx:
				mx = sm
				mxl = x - l

	print(f"{mxl} {mx}")
