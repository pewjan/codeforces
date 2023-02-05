import sys

sys.stdin = open("bcount.in", "r")
sys.stdout = open("bcount.out", "w")

n, q = list(map(int, input().split()))
arr = []
ranges = []
pre = [[0,0,0] for x in range(n+1)]
for _ in range(n):
    arr.append(int(input()))
for _ in range(q):
    x,y = list(map(int, input().split()))
    ranges.append([x,y])
total = [0, 0, 0]
for i in range(1, len(arr)+1):
    total[arr[i-1]-1]+=1
    pre[i] = total[:]

for i in range(q):
    a, b = ranges[i]
    x = pre[b][0] - pre[a-1][0]
    y = pre[b][1] - pre[a-1][1]
    z = pre[b][2] - pre[a-1][2]
    print(x,y,z)