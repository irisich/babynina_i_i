#include <iostream>

#define interval_min 0.1
#define interval_max 1.0
#define delta_x 0.05
#define eps 0.0001

int main() {

    for (double x = interval_min; x <= interval_max; x += delta_x) {
        int i = 0;
        double element = (-1) * pow(x, 2 * i + 1) / (2*x + 1);
        double summ = element;
        while (element >= eps) {
            i++;
            element = element * pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1);;           
            summ += element;
        }

        std::cout << x << element << std::endl;
    }
}
