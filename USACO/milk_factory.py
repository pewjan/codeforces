import sys
from collections import defaultdict
n = int(input())
graph = defaultdict(list)
for _ in range(n-1):
    x, y = list(map(int, input().split()))
    graph[x].append(y)

