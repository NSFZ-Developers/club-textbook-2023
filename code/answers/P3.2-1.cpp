#include <iostream>

int main() {
    int a = 12, b = 13, c = 14;
    double p = (double)(a + b + c) / 2;
    double S = p * (p - a) * (p - b) * (p - c);
    std::cout << S << std::endl;
    return 0;
}
