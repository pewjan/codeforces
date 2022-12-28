string = [x for x in input()]
ROW = 7
COL = 7
visited = set()
#??????R??????U??????????????????????????LD????D?
total = [0]
directions = [[1, 0], [0, 1], [-1, 0], [0, -1]]
map = {}
map["D"] = [1, 0]
map["U"] = [-1, 0]
map["L"] = [0, -1]
map["R"] = [0, 1]


def bt(r, c, i):

  if r < 0 or c < 0 or r >= ROW or c >= COL or (r, c) in visited:
    return  
  if r == ROW - 1 and c == 0 and i != len(string):
    return
  if r == ROW - 1 and c == 0 and i == len(string):
    total[0] += 1
    return
  if i >= len(string):
    return

  visited.add((r, c))
  print(r, c, i, total[0])
  if string[i] == "?":
    for d in directions:
      tr, tc = r + d[0], c + d[1]
      bt(tr, tc, i + 1)
  else:
    bt(r + map[string[i]][0], c + map[string[i]][1], i + 1)

  visited.remove((r, c))


bt(0, 0, 0)
print(total[0])
