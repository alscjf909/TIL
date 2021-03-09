'''
난이도  ○○● |  시간 제한 1초 | 풀이 시간 30분 |메모리 제한 128 MB | 기출 핵심유형
한 마을에 모험가 N 명이 있습니다. 모험가 길드에서는 N명의 모험가를 대상으로 '공포도'를 측정했는데, ' 공포도'가
높은 모험가는 쉽게 공포를 느껴 위험 상황에서 제대로 대처할 능력이 떨어집니다. 모험가 길드장인 민철이는 모험가 그룹을 안전하게 구성하고자 
공포도가 X인 모험가는 반드시 X명 이상으로 구성한 모험가 그룹에 참여해야 여행을 떠날 수 있도록 규정했습니다. 동빈이는 최대 몇개의 모험가 그룹을 만들 수 있는지 궁금합니다.

'''
n = int(input())
m = list(map(int, input().split()))
m.sort()
index = 0
count = 0
while True:
  first = m[index]
  index += first
  if index >= n:
    break
  count +=1
  print(count,2,n)
print(count)
  


'''
난이도  ○○● |  시간 제한 1초 | 풀이 시간 30분 |메모리 제한 128 MB | 기출 핵심유형
모험가 길드 최소 그룹
'''
n = int(input())
m = list(map(int, input().split()))
m.sort()
index = n
count = 0
while True:
  if n<=0:
    break
  else:
    first = m[n-1]
    n = n-first
    count +=1
print(count)