import sys
input = sys.stdin.readline

from math import lcm
A, B = map(int, input().split())
print(lcm(A, B))