mylist = []
blacklist = ['k', 'p', '-', 'n', '-', 'r', '-', '-', '-', 'q']
whitelist = ['K', 'P', '-', 'N', '-', 'R', '-', '-', '-', 'Q']
black, white = 0, 0
for i in range(0, 8):
    mylist.append(list(input()))
for i in range(0, 8):
    for j in range(0, 8):
        if mylist[i][j].isalpha():
            if mylist[i][j] == 'b':
                mylist[i][j] = 'n'
            if mylist[i][j] == 'B':
                mylist[i][j] = 'N'
            if mylist[i][j].islower():
                black += blacklist.index(mylist[i][j])
            if mylist[i][j].isupper():
                white += whitelist.index(mylist[i][j])
            #print("mylist[i][j] = {}, white = {}, black = {}".format(mylist[i][j], white, black))
if white > black:
    print("White")
if white == black:
    print("Draw")
if white < black:
    print("Black")