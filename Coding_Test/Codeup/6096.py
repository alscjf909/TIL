list = []
for i in range(19):
  list.append([])
  k=input().split()
  for j in k:
    list[i].append(int(j))
n = int(input())
x = []
y = []

for i in range(n):
  a,b = map(int, input().split())
  for j in range(19):
    list[a-1][j] = 1 if list[a-1][j] != 1 else 0
    list[j][b-1] = 1 if list[j][b-1] != 1 else 0
for i in list:
  print(' '.join(map(str,i)))
