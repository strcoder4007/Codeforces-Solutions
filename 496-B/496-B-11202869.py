n = int(input())
a = [int(c) for c in input()]
print(''.join(str(x) for x in min([(x + i) % 10 for x in a[j:] + a[:j]] for j in range(n) for i in range(10))))