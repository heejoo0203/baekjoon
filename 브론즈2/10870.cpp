#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    std::cin >> n;

    int result = fibonacci(n);

    std::cout << result << std::endl;

    return 0;
}
