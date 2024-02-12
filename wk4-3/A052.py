import sys

numOfCases = int(sys.stdin.readline())

for i in range(numOfCases):
    tempScore = sys.stdin.readline().strip()

    score = 0
    count = 0
    
    for j in range(len(tempScore)):
        
        if tempScore[j] == 'O':
            count += 1
            if j == (len(tempScore)-1):
                if count >=1:
                    for z in range(count):
                        score += (z+1)
                        
        elif tempScore[j] == 'X':
            if count>=1:
                for z in range(count):
                    score += (z+1)
            count = 0

    print(score)