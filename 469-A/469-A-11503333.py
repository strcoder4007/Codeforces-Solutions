n = int(input())
mylist = list(map(int, input().split()))

if 0 in mylist:
    mylist = []
else:
    del mylist[0]
newlist = list(map(int, input().split()))
if 0 in newlist:
    newlist = []
else:
    del newlist[0]
mylist.extend(newlist)
mylist = list(set(mylist))
if len(mylist) == n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")