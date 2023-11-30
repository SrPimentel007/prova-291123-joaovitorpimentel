#include <iostream>
#include <string>
#include <vector>
#include <iostream>

int main() {
    int numero1, numero2;
    
    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;
    
    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;
    return 0;
}

double calcularTamanhoMedio(std::vector<std::string> vetorStrings) {
    int somaTamanhos = 0;
    int numeroStrings = vetorStrings.size();

    for (std::string str : vetorStrings) {
        somaTamanhos += str.length();
    }

    double tamanhoMedio = static_cast<double>(somaTamanhos) / numeroStrings;
    return tamanhoMedio;
}

int main() {
    std::vector<std::string> vetor {"Hello", "World", "Programming"};

    double tamanhoMedio = calcularTamanhoMedio(vetor);
    std::cout << "O tamanho médio entre as strings é: " << tamanhoMedio << std::endl;

    return 0;
}

