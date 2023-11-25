#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        std::cin >> numbers[i];
    }

    std::sort(numbers.begin(), numbers.end());

    for (int i = 0; i < N; i++) {
        std::cout << numbers[i] << "\n";
    }

    return 0;
}
