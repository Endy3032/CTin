from math import floor, sqrt

n = int(input().strip())

s = 1
# d = [1]

for i in range(2, floor(sqrt(n)) + 1):
	if n % i == 0:
		s += i
		# d.append(i)
		if n / i != i:
			s += n / i
			# d.append(n / i)

# print(d)
print(1 if int(s) > int(n) else 0)
