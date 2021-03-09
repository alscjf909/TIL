'''
난이도  ○○● |  시간 제한 1초 | 풀이 시간 30분 | 메모리 제한 128 MB | 기출 K 대회 기출
'''
data = input()
count0 = 0
count1 = 1

if data[0] == '1':
  count0 +=1
else:
  count1 += 1

for i in range(len(data)-1):
  if data[i] != data[i+1]:
    if data[i+1] == '1':
      count0 +=1
    else:
      count1 +=1

print(min(count0,count1))