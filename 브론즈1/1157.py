word = input().upper()

frequency = [0] * 26

for c in word:
    if c.isalpha():
        index = ord(c) - ord('A')
        frequency[index] += 1

max_frequency = max(frequency)

if frequency.count(max_frequency) > 1:
    result = '?'
else:
    result = chr(frequency.index(max_frequency) + ord('A'))

print(result)
