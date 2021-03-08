Price = 1260 # 물건 가격
Coin_state = [500,100,50,10] #동전 종류
cnt = 0
for coin in Coin_state:
  cnt += Price // coin
  Price %=  coin

print(cnt)