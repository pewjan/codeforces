string = input()
used = [False for _ in range(len(string))]
output = []
par = []

def bt():
    if len(par) == len(string):
        output.append(par.copy())
        return
    for i in range(len(used)):
        if used[i]:
            continue
        used[i] = True
        par.append(string[i])
        bt()
        used[i] = False
        par.pop()


bt()
print(len(output))
output.sort()
for x in output:
    print("".join(x))
