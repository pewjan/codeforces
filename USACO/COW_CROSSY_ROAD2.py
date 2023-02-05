import sys


sys.stdin = open("circlecross.in", "r")
sys.stdout = open("circlecross.out", "w")
string = input()
output = 0

for i in range(len(string)):
    lStart = string[i]
    for j in range(i+1, len(string)):
        rStart = string[j]
        lEnd = False
        rEnd = False
        for k in range(j+1, len(string)):
            if string[k] == rStart and lEnd == True:
                output+=1
                break
            elif string[k] == lStart:
                lEnd = True
            elif string[k] == rStart and lEnd == False:
                break;
print(output)


