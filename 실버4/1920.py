import sys

# ù��° ���� �Է� �ޱ�
n = int(sys.stdin.readline())

# ù��° ������ set���� ����
a = set(map(int, sys.stdin.readline().split()))

# �ι�° ���� �Է� �ޱ�
m = int(sys.stdin.readline())
b = list(map(int, sys.stdin.readline().split()))

# �ι�° ������ �� ���ҿ� ���� ù��° ������ ���ԵǾ� �ִ��� Ȯ���Ͽ� ���
for num in b:
    print(1) if num in a else print(0)