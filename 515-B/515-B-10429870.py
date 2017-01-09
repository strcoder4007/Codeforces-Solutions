from itertools import repeat
n, m = map(int, input().split())
mylist1 = []
mylist1 = mylist1 + list(repeat(0, n))
newlist1 = []
newlist1 = newlist1 + list(repeat(0, m))
mylist = list(map(int, input().split()))
num1 = mylist[0]
del(mylist[0])
newlist = list(map(int, input().split()))
num2 = newlist[0]
del(newlist[0])
for i in range(0, len(mylist)):
    mylist1[mylist[i]] = 1
for i in range(0, len(newlist)):
    newlist1[newlist[i]] = 1
done = True
limit = 100000
for i in range(0, limit):
    if mylist1[i%n] == 1 or newlist1[i%m] == 1:
        mylist1[i%n] = 1
        newlist1[i%m] = 1
if done:
    for i in range(0, n):
        if mylist1[i] == 0:
            print("No")
            done = False
            break
if done:
    for i in range(0, m):
        if newlist1[i] == 0:
            done = False
            print("No")
            break
if done:
    print("Yes")