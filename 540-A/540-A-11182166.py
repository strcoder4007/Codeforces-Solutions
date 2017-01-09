n = int(input())
list1 = list(map(int, input()))
list2 = list(map(int, input()))
count = 0
for i in range(n):
    if abs(list1[i]-list2[i]) > 5:
        count += 10 - abs(list1[i]-list2[i])
    else:
        count += abs(list1[i]-list2[i])
print(count)