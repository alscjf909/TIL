'''
난이도  ○○● |  시간 제한 1초 | 메모리 제한 128 MB | 기출 2019 국가 교육기관 코딩 테스트
N * M 개의 카드들이 놓여 있고 N은 행의 개수를 의미하며, M은 열의 개수를 의미한다.
 먼저 뽑고자 하는 카드가 포함되어 있는 행을 선택한다.수 있도록 전략을 세워야 한다.
'''
n,m = map(int, input().split())
result = 0

for i in range(n):
  data = list(map(int,input().split()))
  min_value = min(data)
  result = max(min_value,result)

print(result)
