from collections import *
N, M = list(map(int, input().split()))
hashMap = defaultdict(list)
lowest = 2
if(N == 1 and M == 1):
    print("Yes")
    exit()
start = 0
for _ in range(M):
    x, y = list(map(int, input().split()))
    start = x
    hashMap[x].append(y)
    hashMap[y].append(x)

for i in range(1, N+1):
    if i not in hashMap:
        print("No")
        exit()
for key, value in hashMap.items():
    if(len(value) > 2 or len(value) < 1):
        print("No")
        exit()
    else:
        lowest = min(lowest, len(value))

if(lowest != 1):
    print("No")
    exit()
visited = set()
def dfs(node):
    visited.add(node)
    for nei in hashMap[node]:
        if nei not in visited:
            dfs(nei)
dfs(start)
if len(visited) != N:
    print("No")
    exit()    

print("Yes") 