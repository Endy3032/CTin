t = int(input())

for i in range(t):
	input()

	ns = [int(i) % 3 for i in input().strip().split()]
	_1, _2, _3 = ns.count(1), ns.count(2), ns.count(0)
	r1, r2 = _1 - min(_1, _2), _2 - min(_1, _2)

	print(_3 + min(_1, _2) + (r1 // 3 if r1 > 0 else 0) + (r2 // 3 if r2 > 0 else 0))