#include <iostream>

int main() {
    double F, C;

    std::cout << "Informe a temperatura em graus Fahrenheit: ";
    std::cin >> F;

    C = (F - 32) * (5.0 / 9.0);

    std::cout << "A temperatura em graus Celsius é: " << C << "°C" << std::endl;

    return 0;
}
