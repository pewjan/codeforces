import sys
from collections import *


sys.stdin = open("notlast.in", "r")
sys.stdout = open("notlast.out", "w")

n = int(input())
hashMap = defaultdict(int)
arr = []
last = -1
for _ in range(n):
    x,y = input().split()
    hashMap[x] += int(y)

for key, value in hashMap.items():
    arr.append([value, key])
arr.sort()

for i in range(1, len(arr)):
    last = i
    if arr[i][0] != arr[i-1][0]:
        break
    

if (last > 0) and (arr[last][0] == arr[last-1][0]):
    print("Tie")
else:
    print(arr[last][1])
    