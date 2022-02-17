import sys
input = sys.stdin.readline

import heapq as hq
INF = 10**9
def dijkstra(start):
    queue = []
    hq.heappush(queue, (0, start))
    distance[start] = 0
    while queue:
        dist, now = hq.heappop(queue)
        if distance[now] < dist:
            continue

        for i in graph[now]:
            cost = dist + i[1]
            if cost < distance[i[0]]:
                hq.heappush(queue, (cost, i[0]))
                distance[i[0]] = cost
                parent[i[0]] = now

    path = []
    now = end
    while now != start:
        path.append(now)
        now = parent[now]
    path.append(start)
    return path[::-1]

N = int(input())
M = int(input())
graph = [[] * (N+1) for _ in range(N+1)]
distance = [INF] * (N+1)
parent = [x for x in range(N+1)]
for _ in range(M):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))

start, end = map(int, input().split())
path = dijkstra(start)

print(distance[end])
print(len(path))
print(*path)