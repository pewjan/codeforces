import sys
from collections import *
n, x = list(map(int, input().split()))
arr = list(map(int, input().split()))
left = 0
right = 0
total = 0
for i in range(len(arr)):
    right+=arr[i]
    
    while right >= x:
        if right == x:
            total+=1
        right-=arr[left]
        left+=1

print(total)