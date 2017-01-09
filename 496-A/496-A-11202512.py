n = int(input())
mylist = list(map(int, input().split()))
list1 = []
for i in range(1, len(mylist)-1):
    newlist = []
    newlist.extend(mylist[0:i])
    newlist.extend(mylist[i+1:n])
    #print(newlist)
    maxi = 0
    for j in range(1, len(newlist)):
        if maxi < newlist[j]-newlist[j-1]:
            maxi = newlist[j]-newlist[j-1]
    list1.append(maxi)
    #print(list1)
print(min(list1))