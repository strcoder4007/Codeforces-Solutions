def check(num):
    if num%1 == 0:
        return True
    else:
        return False
mylist = list(map(int, input().split()))
summ = sum(mylist)
if summ == 0:
    print("-1")
else:
    x = summ/5
    if check(x):
        print(int(x))
    else:
        print("-1")