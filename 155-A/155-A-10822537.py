n = int(input())
mylist = list(map(int, input().split()))
low, high = mylist[0], mylist[0]
amazing = 0
for i in range(1, n):
    if mylist[i] < low:
        amazing += 1
        low = mylist[i]
    if mylist[i] > high:
        amazing += 1
        high = mylist[i]
print(amazing)