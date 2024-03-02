#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    double p = (double)(a + b + c) / 2;
    double S = p * (p - a) * (p - b) * (p - c);
    std::cout << S << '\n';
    return 0;
}
