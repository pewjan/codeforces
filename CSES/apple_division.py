N = int(input())
arr = list(map(int, input().split()))
output = float("inf")

def bt(i, p1, p2):
    if i >= len(arr):
        global output
        output = min(output, abs(p1 - p2))
        return 
    bt(i+1, p1+arr[i], p2)
    bt(i+1, p1, p2+arr[i])

bt(0,0,0)
print(output)


