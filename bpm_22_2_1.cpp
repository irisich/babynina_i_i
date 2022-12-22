#include <iostream>

int main() {
    double x = 0;
    double y = 0;
    int counter = 0;
    double zz = 0;
    while (std::cin) {
        counter += 1;
        std::cin >> x >> y;
        if ((y >= std::abs(x)) && (y <= (2 - x * x))) {
            zz += 1;
        }}
    std::cout << (zz - 1) / (counter - 1) << std::endl;
}
