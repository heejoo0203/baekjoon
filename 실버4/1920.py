import sys

# 첫번째 수열 입력 받기
n = int(sys.stdin.readline())

# 첫번째 수열을 set으로 저장
a = set(map(int, sys.stdin.readline().split()))

# 두번째 수열 입력 받기
m = int(sys.stdin.readline())
b = list(map(int, sys.stdin.readline().split()))

# 두번째 수열의 각 원소에 대해 첫번째 수열에 포함되어 있는지 확인하여 출력
for num in b:
    print(1) if num in a else print(0)