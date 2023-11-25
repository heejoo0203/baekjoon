#include <iostream>
#include <queue>
#include <string>

int main() {
    int n;
    std::queue<int> myQueue;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string command;
        std::cin >> command;

        if (command == "push") {
            int x;
            std::cin >> x;
            myQueue.push(x);
        } else if (command == "pop") {
            if (!myQueue.empty()) {
                std::cout << myQueue.front() << std::endl;
                myQueue.pop();
            } else {
                std::cout << -1 << std::endl;
            }
        } else if (command == "size") {
            std::cout << myQueue.size() << std::endl;
        } else if (command == "empty") {
            std::cout << myQueue.empty() << std::endl;
        } else if (command == "front") {
            if (!myQueue.empty()) {
                std::cout << myQueue.front() << std::endl;
            } else {
                std::cout << -1 << std::endl;
            }
        } else if (command == "back") {
            if (!myQueue.empty()) {
                std::cout << myQueue.back() << std::endl;
            } else {
                std::cout << -1 << std::endl;
            }
        }
    }

    return 0;
}
