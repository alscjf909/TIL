'''
난이도  ○○● |  시간 제한 1초 | 메모리 제한 128 MB | 기출 2018 E 기업 알고리즘 대회
1. N에서 1을 뺀다
2. N을 K로 나눈다.
계산 횟수 출력
'''
n, m = map(int, input().split())
count = 0

while True:
  if n == 1:
    break
  elif (n % m) != 0:
    n -= 1
    count += 1

  elif (n % m) == 0:
    n /= m
    count += 1

print(count)
