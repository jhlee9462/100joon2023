#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    if (a > b) {
        std::cout << '>';
    } else if (a < b) {
        std::cout << '<';
    } else {
        std::cout << "==";
    }

    std::cout << std::endl;

    return 0;
}
