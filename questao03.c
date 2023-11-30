#include <iostream>
#include <string>

double calcularTamanhoMedio(const std::string& primeiraString, const std::string& segundaString) {
    int tamanhoTotal = primeiraString.length() + segundaString.length();
    return static_cast<double>(tamanhoTotal) / 2; 
}

int main() {
    std::string primeiraString, segundaString;
    
    std::cout << "Digite a primeira string: ";
    std::getline(std::cin, primeiraString);
    
    std::cout << "Digite a segunda string: ";
    std::getline(std::cin, segundaString);
    
    double tamanhoMedio = calcularTamanhoMedio(primeiraString, segundaString);
    
    std::cout << "O tamanho médio entre as strings é: " << tamanhoMedio << std::endl;
    
    return 0;
}
