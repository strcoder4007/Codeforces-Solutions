import string

s = input()
done = False
for i in range(len(s)+1):
    for a in string.ascii_lowercase:
        ns = s[:i] + a + s[i:]
        if ns == ns[::-1]:
            print(ns)
            done = True
            break
    if done:
        break
if not done:
    print("NA")