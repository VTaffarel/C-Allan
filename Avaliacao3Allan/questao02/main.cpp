#include <iostream>

int main() {
    double Area, Base, Altura;

    std::cout << "Informe a base do triângulo: ";
    std::cin >> Base;

    std::cout << "Informe a altura do triângulo: ";
    std::cin >> Altura;

    Area = (Base * Altura) / 2.0;

    std::cout << "A área do triângulo é: " << Area << std::endl;

    return 0;
}
