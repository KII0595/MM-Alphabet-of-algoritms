#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i * i <= n; ++i) {
        std::cout << i * i;
        if ((i + 1) * (i + 1) <= n) {
            std::cout << " ";
        }
    }
    
    return 0;
}
