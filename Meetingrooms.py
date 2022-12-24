def check(arr):
    arr.sort()
    print(arr)


intervals = [[[0,30],[5,10],[15,20]], [[2,7]]]
for i in intervals:
    print(check(i))