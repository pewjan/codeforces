import sys
sys.setrecursionlimit(1000000000)

n, x = list(map(int, input().split()))
arr = list(map(int, input().split()))

memo = {}

def dp(i, total):
    print(i, total)
    if((i, total) in memo):
        return memo[(i, total)]
    if total == x:
        return 0
    if total > x:
        return float("inf")
    if i >= n:
        return float("inf")

    d1 = 1 + dp(i, total+arr[i])
    d2 = dp(i+1, total)
    memo[(i, total)] = min(d1, d2)
    return memo[(i, total)]

print(dp(0, 0))
