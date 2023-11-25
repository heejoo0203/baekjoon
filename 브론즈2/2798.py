def blackjack(N, M, cards):

    closest_sum = 0

    # 세 개의 카드를 선택하여 합 구하기

    for i in range(N - 2):

        for j in range(i + 1, N - 1):

            for k in range(j + 1, N):

                card_sum = cards[i] + cards[j] + cards[k]

                # 합이 M을 넘지 않으면서 최대한 가까운 값을 찾기

                if card_sum <= M:

                    closest_sum = max(closest_sum, card_sum)

    return closest_sum

# 입력 받기

N, M = map(int, input().split())

cards = list(map(int, input().split()))

# 결과 출력

result = blackjack(N, M, cards)

print(result)