s = input()
t = input()
st = ''
for i in range(0, len(s)):
    st += str(int(s[i])^int(t[i]))
print(st)