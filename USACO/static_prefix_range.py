n, q = list(map(int, input().split()))
arr = list(map(int, input().split()))
ranges = []
for _ in range(q):
    x,y = list(map(int, input().split()))
    ranges.append([x,y])

prefix = [0] * (n + 1)
total = 0
for i in range(1, n+1):
    total+=arr[i-1]
    prefix[i] = total
for i in range(q):
    total = prefix[ranges[i][1]] - prefix[ranges[i][0]]
    print(total)