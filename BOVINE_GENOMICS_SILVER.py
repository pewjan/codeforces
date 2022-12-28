import sys
# sys.stdin = open("cownomics.in", "r")
# sys.stdout = open("cownomics.out", "w")
N, M = list(map(int, input().split()))
sArr = []
pArr = []
output = 0
for _ in range(N):
    sArr.append(input())
for _ in range(N):
    pArr.append(input())

for i in range(M):
    arr1 = [0 for _ in range(26)]
    for j in range(N):
        arr1[ord(sArr[j][i]) - ord("A")]+=1
        print(sArr[j][i])
    print()
    for j in range(i, M):
        arr2 = [0 for _ in range(26)]
        for k in range(N):
            arr2[ord(pArr[k][j]) - ord("A")]+=1
            print(pArr[k][j], output)
        print()
        if arr1 != arr2:
            output+=1
print(output)


