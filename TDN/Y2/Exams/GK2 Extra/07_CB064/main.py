from math import floor, ceil

n = int(input().strip())
d = sorted(list(map(int, input().split())))
_1, _2, _3, _4 = d.count(1), d.count(2), d.count(3), d.count(4)

# 4 + 2 2
s = _4 + floor(_2 / 2)
_4 = 0
_2 = _2 % 2

# print([s, _1, _2, _3, _4])

# 1 3
m13 = min(_1, _3)
s += m13
_1 -= m13
_3 -= m13

# print([s, _1, _2, _3, _4])

# 1 1 2
if _2 > 0:
	s += 1
	if _1 > 0:
		_1 -= 2

# print([s, _1, _2, _3, _4])

if _1 > 0:
	s += ceil(_1 / 4)

# print([s, _1, _2, _3, _4])

if _3 > 0:
	s += _3

# print([s, _1, _2, _3, _4])

print(s)
