#include <iostream>

int main() {
    double TEMPO, VELOCIDADE, DISTANCIA, LITROS_USADOS;

    std::cout << "Informe o tempo gasto na viagem (em horas): ";
    std::cin >> TEMPO;

    std::cout << "Informe a velocidade média durante a viagem (em km/h): ";
    std::cin >> VELOCIDADE;

    DISTANCIA = TEMPO * VELOCIDADE;

    LITROS_USADOS = DISTANCIA / 12.0;

    std::cout << "Velocidade média: " << VELOCIDADE << " km/h" << std::endl;
    std::cout << "Tempo gasto na viagem: " << TEMPO << " horas" << std::endl;
    std::cout << "Distância percorrida: " << DISTANCIA << " km" << std::endl;
    std::cout << "Quantidade de litros utilizada na viagem: " << LITROS_USADOS << " litros" << std::endl;

    return 0;
}
