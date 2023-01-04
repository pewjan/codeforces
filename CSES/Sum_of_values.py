from collections import defaultdict
n, x = list(map(int, input().split()))
arr  = list(map(int, input().split()))
found = False
hashMap = defaultdict(int)
for i in range(len(arr)):
    if x - arr[i] in hashMap:
        print(hashMap[x-arr[i]]+1, i+1)
        found = True
        break
    hashMap[arr[i]] = i
if not found:
    print("IMPOSSIBLE")