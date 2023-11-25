#include <iostream>
#include <algorithm>

int main() {

    std::string num1, num2;

    std::cin >> num1 >> num2;

    std::reverse(num1.begin(), num1.end());

    std::reverse(num2.begin(), num2.end());

    int int_num1 = std::stoi(num1);

    int int_num2 = std::stoi(num2);

    std::cout << (int_num1 > int_num2 ? int_num1 : int_num2) << std::endl;
    return 0;
    }

