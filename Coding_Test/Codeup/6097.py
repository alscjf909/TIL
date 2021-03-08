h,w = input().split()
n = int(input())
w = int(w)
h = int(h)
list=[]
for i in range(h):
  list.append([])
  for j in range(w):
    list[i].append(0)
for i in range(n):
  l, d, x, y = map(int,input().split())
  for j in range(l):
    if d == 0:
      list[x-1][y-1]=1
      y += 1
    else:
      list[x-1][y-1]=1
      x +=1
for i in range(h):
  for j in range(w):
    print(list[i][j],end=' ')
  print()

