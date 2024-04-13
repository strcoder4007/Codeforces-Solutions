mylist = list(map(int, input()))
if mylist[0] == 9:
    for i in range(1, len(mylist)):
        if (9-mylist[i] < mylist[i]):
            mylist[i] = 9-mylist[i]
else:
    for i in range(0, len(mylist)):
        if (9-mylist[i] < mylist[i]):
            mylist[i] = 9-mylist[i]
print(''.join(str(x) for x in mylist))