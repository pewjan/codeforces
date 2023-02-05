from collections import *
N = int(input())
hashMap = defaultdict(int)
for _ in range(N):
    arr = list(map(int, input().split()))
    if arr[0] == 0:
        hashMap[arr[1]] = arr[2]
    else:
        print(hashMap[arr[1]])

