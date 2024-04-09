a = input().strip()

chars = {}
mx = 0

for i in a:
	if i not in chars: chars[i] = 0
	chars[i] += 1
	mx = max(mx, chars[i])

ans = []

for i in chars:
	if chars[i] == mx: ans.append(i)

print(" ".join(sorted(ans)))
