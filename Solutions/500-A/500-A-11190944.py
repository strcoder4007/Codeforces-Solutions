a, b = map(int, input().split(' '))
x = list(map(int, input().split(' ')))

curr = 1
while curr <= b:
    curr += x[curr-1]
    if curr == b:
        print("YES")
        quit()
if curr == b:
    print("YES")
else:
    print("NO")