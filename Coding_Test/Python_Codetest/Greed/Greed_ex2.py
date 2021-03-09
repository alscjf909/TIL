'''
난이도  ○○● | 풀이 시간 30분 | 시간 제한 1초 | 메모리 제한 128 MB | 기출 2019 국가 교육기관 코딩 테스트
N개의 숫자를 입력 받고 m 개의 최대값을 더한다. 이떄 k개보다 많이 연속으로 최대값을 더할 수 없다.
'''

n,m,k = map(int,input().split())
data = list(map(int,input().split()))

data.sort()
first = data[n-1]
second = data[n-2]

result = 0

count = m // (k+1)
result = count * (k * first + second)
count = m % (k+1)
result += count*first
print(result)
