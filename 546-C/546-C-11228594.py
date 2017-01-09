n = int(input())
list1 = list(map(int, input().split()))
list2 = list(map(int, input().split()))
k1 = list1[0]
del list1[0]
k2 = list2[0]
del list2[0]
i = 0
count = 0
while(len(list1) != 0 and len(list2) != 0):
    if(list1[i] < list2[i]):
        list2.append(list1[i])
        list2.append(list2[i])
        del list1[i]
        del list2[i]
        count += 1
    elif(list2[i] < list1[i]):
        list1.append(list2[i])
        list1.append(list1[i])
        del list1[i]
        del list2[i]
        count += 1
    else:
        del list1[i]
        del list2[i]
    if count == n**2+10:
        print("-1")
        break
if len(list1) == 0:
    print("{} 2".format(count))
if len(list2) == 0:
    print("{} 1".format(count))