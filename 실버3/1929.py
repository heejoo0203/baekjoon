import sys

# n���� �۰ų� ���� �Ҽ����� ����Ʈ�� ��ȯ�ϴ� �Լ�
def get_primes(n):
    # 0�� 1�� �Ҽ��� �ƴϹǷ� False�� �ʱ�ȭ
    is_prime = [False, False] + [True] * (n-1)
    primes = []
    for i in range(2, n+1):
        if is_prime[i]:
            primes.append(i)
            # i�� ������� ��� �Ҽ��� �ƴ� ������ ǥ��
            for j in range(i*2, n+1, i):
                is_prime[j] = False
    return primes

# �Է¹��� �� ���� ������ ����
m, n = map(int, sys.stdin.readline().split())

# n���� �۰ų� ���� �Ҽ����� ����Ʈ�� ����
primes = get_primes(n)

# m���� n������ �� �߿��� �Ҽ��� ���� ���
for p in primes:
    if p >= m:
        print(p)