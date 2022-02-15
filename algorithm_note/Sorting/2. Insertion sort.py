# 비교 횟수 = N*(N+1) // 2
# 최악의 경우 : 배열이 역순일 때 O(N^2)
# 최고의 경우 : 배열이 정순일 때 O(N)
# 평균적인 경우 : O(N^2)

arr = [7, 5, 9, 1, 4, 2, 6]

for i in range(1, len(arr)):
    # 두 번째 원소부터 정렬 시작
    # 첫 번째 원소는 정렬이 되어있다고 판단
    # j : i 위치부터 두 번쨰 원소까지...
    for j in range(i, 0, -1):
        # 만약 내가 정리하고자 하는 원소보다 왼쪽에 있는 것이 더 크다면...
        if arr[j-1] > arr[j]:
            # 둘의 위치를 바꾼다(크기 순으로 정렬됨)
            arr[j-1], arr[j] = arr[j], arr[j-1]
        # 만약 내가 정리하고자 하는 원소보다 왼쪽에 있는 것이 더 작거나 같다면...
        else:
            # 더 정렬할 필요 없이 위치를 찾음
            break
print(arr)