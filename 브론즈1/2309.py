def find(dwarf):
    sum = 0
    totalSum = 0

    for i in range(9):
        totalSum += dwarf[i]

    for j in range(8):
        for k in range(j+1,9):
            sum = totalSum - dwarf[j] - dwarf[k]

            if sum == 100:
                dwarf.remove(dwarf[j])
                dwarf.remove(dwarf[k-1])
                dwarf.sort()
                return dwarf


dwarf = []
for i in range(9):
    dwarf.append(int(input()))
result = find(dwarf)
for dwarf in result:
    print(dwarf)