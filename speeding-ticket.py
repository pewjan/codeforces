import sys
sys.stdin = open("speeding.in", "r")
sys.stdout = open("speeding.out", "w")
N, M = list(map(int, input().split()))
arr = []
pArr = []
highest = 0
for i in range(N):
    x, y = list(map(int, input().split()))
    for i in range(x):
        arr.append(y)
for i in range(M):
    x, y = list(map(int, input().split()))
    for i in range(x):
        pArr.append(y)
for i in range(100):
    if pArr[i] > arr[i]:
        highest = max(highest, abs(pArr[i] - arr[i]))

print(highest)
