s = input()
t = input()
final = ""
isS = True
num = 0
for i in range(len(s)):
    if s[i] == t[i]:
        final += s[i]
    else:
        num += 1
        if isS:
            final += s[i]
            isS = False
        else:
            final += t[i]
            isS = True
if num % 2 == 0:
    print(final)
else:
    print("impossible")