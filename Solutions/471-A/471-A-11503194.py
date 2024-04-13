mylist = list(map(int, input().split()))
myset = list(set(mylist))
flag = 0
elephant = 0
for i in range(0, len(myset)):
    if(mylist.count(myset[i]) == 2):
        elephant = 1
    if(mylist.count(myset[i]) >= 4):
        flag = 1
    if(mylist.count(myset[i]) == 6):
        flag = 1
        elephant = 1
if flag == 0:
    print("Alien")
else:
    if(elephant == 1):
        print("Elephant")
    else:
        print("Bear")