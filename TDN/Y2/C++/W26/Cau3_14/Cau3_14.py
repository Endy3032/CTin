s = input()

n = set(i for i in s)

print(len(n))

maxpalin = 0

for i in range(1, len(s)):
	# print(i, s[i])
	for l in range(1, min(i, len(s) - i) + 1):
		# print(l)
		s2 = s[i - l : i + l]
		if "".join(reversed(s2)) == s2:
			maxpalin = max(len(s2), maxpalin)

		s2 = s[i - l : i + l + 1]
		if "".join(reversed(s2)) == s2:
			maxpalin = max(len(s2), maxpalin)
	# print("---")

print(maxpalin)
