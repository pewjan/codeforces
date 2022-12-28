N = int(input())
arr = list(map(int, input().split()))

final = float("inf")
arr.sort() 


for i in range(len(arr)):
    for j in range(i+1, len(arr)):
        total = 0
        temp = arr[:i] + arr[i+1:j] + arr[j+1:]
        for k in range(0, len(temp)-1, 2):
            total+=abs(temp[k] - temp[k+1])
        final = min(final, total)




print(final)



