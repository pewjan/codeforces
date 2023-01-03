import sys
from collections import *

sys.stdin = open("div7.in", "r")
sys.stdout = open("div7.out", "w")

n = int(input())
arr = []
hashMap = defaultdict(int)
hashMap[0] = 1
total = 0
count = 0
for _ in range(n):
    arr.append(int(input()))

for i in range(len(arr)):
    total += arr[i]
    if (total % 7) in hashMap:
        count = max(count, (i - hashMap[total%7]))

    if total%7 not in hashMap:
        hashMap[total%7]=i
print(count)

