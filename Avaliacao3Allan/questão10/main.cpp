#include <iostream>

int main() {
    int valor;

    std::cout << "Informe um valor inteiro: ";
    std::cin >> valor;

    int quadrado = valor * valor;
    int cubo = valor * valor * valor;

    std::cout << "Quadrado do valor: " << quadrado << std::endl;
    std::cout << "Cubo do valor: " << cubo << std::endl;

    return 0;
}
