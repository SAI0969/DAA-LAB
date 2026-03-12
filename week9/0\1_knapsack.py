def knapsack_01(weights, profits, capacity):
    n = len(weights)

    dp = [[0 for _ in range(capacity + 1)] for _ in range(n + 1)]

    for i in range(1, n + 1):
        for w in range(1, capacity + 1):

            if weights[i-1] <= w:
                dp[i][w] = max(
                    profits[i-1] + dp[i-1][w - weights[i-1]],
                    dp[i-1][w]
                )
            else:
                dp[i][w] = dp[i-1][w]

    print("DP Table:")
    for row in dp:
        for val in row:
            print(val, end="\t")
        print()

    return dp[n][capacity]


weights = [3,2,4,5,1]
profits = [50,40,70,80,10]
capacity = 7

max_profit = knapsack_01(weights, profits, capacity)
print("\nMaximum Profit:", max_profit)
