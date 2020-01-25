coins = [1, 2, 5, 10, 20, 50, 100, 200, 300]

target = 623

print(sum(coins))

if sum(coins) < target:
    print("Cannot Achieve {}".format(target))
else:
    coins.sort()
    coins.reverse()
    SumOfCoins = 0
    SetOfCoins = []
    for i in range(len(coins)):

        SumOfCoins += coins[i]
        SetOfCoins.append(coins[i])
        if SumOfCoins == target:
            print(SetOfCoins)
        elif SumOfCoins > target:
            SumOfCoins -= coins[i]
            SetOfCoins.remove(coins[i])
