#include <iostream>
#include <cmath>

int main() {
    double RAIO, ALTURA;

    std::cout << "Informe o raio da lata de óleo: ";
    std::cin >> RAIO;

    std::cout << "Informe a altura da lata de óleo: ";
    std::cin >> ALTURA;

    double VOLUME = 3.14159 * std::pow(RAIO, 2) * ALTURA;

    std::cout << "O volume da lata de óleo é: " << VOLUME << " unidades cúbicas" << std::endl;

    return 0;
}
