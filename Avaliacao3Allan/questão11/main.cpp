#include <iostream>


int main() {
    int Int1, Int2, quociente, resto;

    std::cout << "Informe o valor de Int1: ";
    std::cin >> Int1;

    std::cout << "Informe o valor de Int2: ";
    std::cin >> Int2;

    quociente = Int1 / Int2;
    resto = Int1 % Int2;

    std::cout << "Quociente da divisão: " << quociente << std::endl;
    std::cout << "Resto da divisão: " << resto << std::endl;

    return 0;
}
 