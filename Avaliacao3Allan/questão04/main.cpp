#include <iostream>

int main() {
    double HT, VH, PD;

    std::cout << "Informe as horas trabalhadas no mês: ";
    std::cin >> HT;

    std::cout << "Informe o valor da hora trabalhada: ";
    std::cin >> VH;

    std::cout << "Informe o percentual de desconto: ";
    std::cin >> PD;

    double SB = HT * VH;

    double TD = (PD / 100) * SB;

    double SL = SB - TD;

    std::cout << "Horas trabalhadas: " << HT << " horas" << std::endl;
    std::cout << "Salário bruto: R$" << SB << std::endl;
    std::cout << "Desconto: R$" << TD << std::endl;
    std::cout << "Salário líquido: R$" << SL << std::endl;

    return 0;
}
