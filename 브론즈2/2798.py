def blackjack(N, M, cards):

    closest_sum = 0

    # �� ���� ī�带 �����Ͽ� �� ���ϱ�

    for i in range(N - 2):

        for j in range(i + 1, N - 1):

            for k in range(j + 1, N):

                card_sum = cards[i] + cards[j] + cards[k]

                # ���� M�� ���� �����鼭 �ִ��� ����� ���� ã��

                if card_sum <= M:

                    closest_sum = max(closest_sum, card_sum)

    return closest_sum

# �Է� �ޱ�

N, M = map(int, input().split())

cards = list(map(int, input().split()))

# ��� ���

result = blackjack(N, M, cards)

print(result)