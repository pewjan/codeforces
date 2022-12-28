board = []
for i in range(8):
    board.append([x for x in input()])
hashSet = set()

def isValid(r, c):
    if c in hashSet:
        return False
    if board[r][c] == "*":
        return False
    tempR, tempC = r, c
    while tempR > -1 and tempC > -1:
        if board[tempR][tempC] == "X":
            return False
        tempR-=1
        tempC-=1
    tempR, tempC = r, c
    while tempR > -1 and tempC < len(board[0]):
        if board[tempR][tempC] == "X":
            return False
        tempR-=1
        tempC+=1
    return True
    
total = [0]

def dfs(r):
    if r >= 8:
        total[0]+=1
    for i in range(8):
        if not isValid(r, i):
            continue
        board[r][i] = "X"      
        hashSet.add(i) 
        dfs(r+1)
        board[r][i] = "."      
        hashSet.remove(i)

dfs(0)
print(total[0])
        
    

