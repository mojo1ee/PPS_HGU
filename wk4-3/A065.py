import sys 

numOfPoints = int(sys.stdin.readline())

pointList = []

for i in range(numOfPoints):
    pointList.append(list(map(int, sys.stdin.readline().split())))

pointList.sort()

for i in range(len(pointList)):
    for j in range(len(pointList[i])):
        print(pointList[i][j], end = " ")
    print()