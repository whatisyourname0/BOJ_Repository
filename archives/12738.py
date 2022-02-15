#12105번과 동일

import sys
input = sys.stdin.readline

from bisect import bisect_left
N = int(input())
arr = list(map(int, input().split()))
dp = [arr[0]]

for i in range(N):
	if arr[i] > dp[-1]:
		dp.append(arr[i])
	else:
		idx = bisect_left(dp, arr[i])
		dp[idx] = arr[i]

print(len(dp))