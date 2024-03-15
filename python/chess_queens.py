arr_indexs = [[i for i in range(1,9)] for i in range(1,9)]

for x1 in range(8):
    for y1 in range(8):
        for x2 in range(8):
            print("\n")
            for y2 in range(8):
                if ((arr_indexs[x1][y1] != arr_indexs[x2][y2]) and
                    (abs(arr_indexs[x1][y1]-arr_indexs[x2][y2]) != abs(arr_indexs[x2][y2]-arr_indexs[x1][y1]))):
                    print("x",end=' ')
                else:
                    print("-",end=' ')

print("\n")
print(*arr_indexs,sep="\n")                