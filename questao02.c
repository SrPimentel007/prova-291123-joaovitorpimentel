#include <stdio.h>

unsigned int calcularFatorial(unsigned int num) {
    if(num == 0) {
        return 1;
    } else {
        return num * calcularFatorial(num - 1);
    }
}

int main() {
  unsigned int numero, fatorial;
  
  printf("Digite um número inteiro: ");
  scanf("%u", &numero);
  
  fatorial = calcularFatorial(numero);
  
  printf("O fatorial de %u é: %u\n", numero, fatorial);
  
  return 0;
}
