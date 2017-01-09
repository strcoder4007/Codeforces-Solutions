n = int(input())
mylist = list(map(int, input().split()))
newlist = sorted(mylist)
newlist = list(reversed(newlist))
list1 = []
list1.append(newlist.index(mylist[0])+1)
for i in range(1, len(mylist)):
    list1.append(newlist.index(mylist[i])+1)
for i in range(0, len(list1)):
    print(list1[i], end = ' ')
print()