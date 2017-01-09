from itertools import permutations

def converttonum(mylist):
    return int(''.join(str(x) for x in mylist))

n = int(input())
l = len(str(n))
index = 0
if l == 1:
    index = 0
else:
    for i in range(1, l):
        index += 2**i
mylist = []
newlist = []
for i in range(0, l):
    mylist.append(4)
newlist.append(converttonum(mylist))
for i in range(0 ,l):
    mylist[i] = 7
    myset = list(set(permutations(mylist)))
    for j in range(0, len(myset)):
        newlist.append(converttonum(myset[j]))
newlist.sort()
index += newlist.index(n)+1
print(index)