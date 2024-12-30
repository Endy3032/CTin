x = int(input())
y = int(input())

if abs(x) == abs(y) or x == 0 or y == 0:
	print(0)
	exit()

if x > 0:
	if y > 0:
		if y > x:
			print(1)
		elif x > y:
			print(2)
	elif y < 0:
		if x > abs(y):
			print(3)
		elif abs(y) > x:
			print(4)
elif x < 0:
	if y < 0:
		if abs(y) > abs(x):
			print(5)
		elif abs(x) > abs(y):
			print(6)
	elif y > 0:
		if abs(x) > y:
			print(7)
		elif y > abs(x):
			print(8)
