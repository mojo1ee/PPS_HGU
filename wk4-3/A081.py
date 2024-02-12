import sys 

numOfTestCases = int(sys.stdin.readline())

for i in range(numOfTestCases):
    array_A = list(map(int, sys.stdin.readline().split()))
    array_A.sort()
    print(array_A[-3])