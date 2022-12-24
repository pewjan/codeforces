import sys

sys.stdin = open("cownomics.in", "r")
sys.stdout = open("cownomics.out", "w")

N, M = list(map(int, input().split()))
sC = []
pC = []
output = 0 
for _ in range(N):
    sC.append(input())
for _ in range(N):
    pC.append(input())


for j in range(M):
    count = 0
    hashSet = set()
    for k in range(N):
        hashSet.add(pC[k][j])

    for k in range(N):
        if sC[k][j] not in hashSet:
            count+=1
    if count == (N):
        output+=1
print(output)




