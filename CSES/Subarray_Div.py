import sys
from collections import *
n = int(input())
arr = list(map(int, input().split()))
hashMap = defaultdict(int)
hashMap[0] = 1
total = 0
count = 0
for i in range(len(arr)):
    total+=arr[i]
    count+=hashMap[total%n]
    hashMap[total%n]+=1
print(count) 