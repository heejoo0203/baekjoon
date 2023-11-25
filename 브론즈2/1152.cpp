#include <iostream>
#include <string>

int main() {
    std::string word;
    int count = 0;

    while (std::cin >> word) {
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}
