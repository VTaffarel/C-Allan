#include <iostream>

int main() {
    int A, B;

    std::cout << "Informe o valor de A: ";
    std::cin >> A;

    std::cout << "Informe o valor de B: ";
    std::cin >> B;

    int temp = A;
    A = B;
    B = temp;

    std::cout << "Valores trocados: A = " << A << " e B = " << B << std::endl;

    return 0;
}
