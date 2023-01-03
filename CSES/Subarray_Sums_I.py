import sys
from collections import *
n, x = list(map(int, input().split()))
arr = list(map(int, input().split()))
hashMap = defaultdict(int)
hashMap[0] = 1
total = 0
count = 0
for i in range(len(arr)):
    total += arr[i]
    count+=hashMap[total%7]
    hashMap[total%7]+=1
print(count)

    