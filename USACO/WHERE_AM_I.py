import sys

# sys.stdin = open("whereami.in", "r")
# sys.stdout = open("whereami.out", "w")
N = int(input())
string = input()
output = 0
hashSet = set()
for i in range(N):
    for j in range(1+1, N):
        