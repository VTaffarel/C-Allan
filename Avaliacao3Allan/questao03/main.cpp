#include <iostream>
#include <string>

int main() {
    std::string nome, sobrenome;

    std::cout << "Informe o nome: ";
    std::cin >> nome;

    std::cout << "Informe o sobrenome: ";
    std::cin >> sobrenome;

    std::string nomeCompleto = nome + " " + sobrenome;

    std::cout << "Nome completo: " << nomeCompleto << std::endl;

    return 0;
}
