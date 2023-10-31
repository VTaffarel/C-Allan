#include <iostream>

int main() {
    double C, F;

    std::cout << "Informe a temperatura em graus Celsius: ";
    std::cin >> C;

    F = (9 * C + 160) / 5;

    std::cout << "A temperatura em graus Fahrenheit é: " << F << "°F" << std::endl;

    return 0;
}
