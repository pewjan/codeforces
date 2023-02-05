from collections import *
import sys
sys.setrecursionlimit(10**9)
N, M = list(map(int, input().split()))
hashMap = defaultdict(set)
lowest = [2]
highest = [1]
if(N == 1 and M == 0):
    print("Yes")
    exit()
start = 0
for _ in range(M):
    x, y = list(map(int, input().split()))
    start = x
    hashMap[x].add(y)
    hashMap[y].add(x)

visited = set()
def dfs(node):
    if node in visited:
        return 1
    
    visited.add(node)
    count = 0
    for nei in hashMap[node]:
        count += dfs(nei)
    lowest[0] = min(lowest[0], count)
    highest[0] = max(highest[0], count)
    return 1
    
dfs(start)

if(lowest[0] != 1 or highest[0] > 2 or len(visited) != N):
    print("No")
else:
    print("Yes") 