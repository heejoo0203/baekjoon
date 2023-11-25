#include <iostream>

int main() {

    int T;

    std::cin >> T;

    for (int i = 1; i <= T; ++i) {

        int A, B;

        std::cin >> A >> B;

        std::cout << "Case #" << i << ": " << A + B << "\n";

    }

    return 0;

}