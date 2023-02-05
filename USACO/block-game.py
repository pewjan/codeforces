import sys
sys.stdin = open("blocks.in", "r")
sys.stdout = open("blocks.out", "w")
N = int(input())
sample = []
arr = [0]*26
for i in range(N):
    x,y = list(map(str, input().split()))
    sample.append([x,y])
for i in range(len(sample)):
    counters =[[0 for _ in range(26)] for _ in range(2)]
    for j in range(len(sample[i])):
        for k in range(len(sample[i][j])):
            c = sample[i][j][k]
            counters[j][ord(c) - ord("a")] += 1
    for x in range(26):
        arr[x] += max(counters[0][x], counters[1][x])
for i in range(26):
    print(arr[i])

        

