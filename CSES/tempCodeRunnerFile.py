N = int(input())
arr = list(map(int, input().split()))

k = [float("inf")]
arr.sort() 


def dfs(count, total, temp):
    if count == N - 1:
        k[0] = min(k[0], total)
        return
    if len(temp) == 0:
        return 

    for i in range(len(temp)-1):
        x = temp[:i] + temp[i+2:]
        dfs(count+1, total+abs(temp[i] - temp[i+1]), x)

dfs(0, 0, arr)

print(k[0])