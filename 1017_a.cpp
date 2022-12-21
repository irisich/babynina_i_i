#include <iostream>

#include <vector>

int main() {
    int n = 0;
    std::cin >> n;
    int tek = 0;
    int summ;
    int mark;
    int number = 1;
    for (int i = 1; i <= n; i++) {
        summ = 0;
        for (int j = 1; j < 5; j++) {
            std::cin >> mark;
            summ += mark;
        }
        if (i == 1) {
            tek = summ;
        }
        if (summ > tek) {
            number++;
        }
    }
    std::cout << number;
}
