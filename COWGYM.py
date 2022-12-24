#K practice
#N cows
from collections import *
import sys

sys.stdin = open("gymnastics.in", "r")
sys.stdout = open("gymnastics.out", "w")

K, N = list(map(int, input().split()))
practices = []
hashMap = defaultdict(int)
output = 0
for _ in range(K):
    practices.append(list(map(int, input().split())))

for i in range(len(practices)):
    for j in range(len(practices[i])): 
        for k in range(j+1, len(practices[i])):
            num1 = practices[i][j]
            num2 = practices[i][k]
            hashMap[(num2, num1)]+=1
for value in hashMap.values():
    if value == len(practices):
        output+=1
print(output)
