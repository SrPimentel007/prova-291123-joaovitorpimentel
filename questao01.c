#include <iostream>

int calcular(int numero1, int numero2) {
    if (numero1 < numero2) {
        return numero1 + numero2;
    } else if (numero1 == numero2) {
        return numero1 * numero2;
    } else {
        return numero1 - numero2;
    }
}

int main() {
    int num1, num2;
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    int resultado = calcular(num1, num2);
    std::cout << "O resultado da operação é: " << resultado << std::endl;

    return 0;
}
