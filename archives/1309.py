import sys
input = sys.stdin.readline

N = int(input())
MOD = 9901
dp = [[0, 0] for _ in range(N+1)]
dp[1][0] = 1
dp[1][1] = 2
for i in range(2, N+1):
    dp[i][0] = (dp[i-1][0] + dp[i-1][1]) % MOD
    dp[i][1] = (2*dp[i-1][0] + dp[i-1][1]) % MOD
print(sum(dp[N]) % MOD)