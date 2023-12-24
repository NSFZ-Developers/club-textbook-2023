#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            std::cout << i << std::endl;
        }
    }
}
/*
// another solution
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 3; i <= n; i += 3) {
        std::cout << i << std::endl;
    }
}
*/