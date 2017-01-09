n, m = map(int, input().split())
moves = 0
while m != n:
    if m%2 == 1 or m < n:
        m += 1
        moves += 1
    else:
        m /= 2
        moves += 1
print(moves)