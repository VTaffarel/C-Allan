#include <iostream>
#include <cmath>

int main() {
    const double PI = 3.14159;

    double RAIO, AREA;

    std::cout << "Informe o raio da circunferência: ";
    std::cin >> RAIO;

    AREA = PI * std::pow(RAIO, 2);

    std::cout << "A área da circunferência é: " << AREA << std::endl;

    return 0;
}
