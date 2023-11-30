#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
   int i = 0;
   int j = strlen(str) - 1;

   while (i < j) {
      if (str[i] != str[j]) {
         return 0; 
      }
      i++;
      j--;
   }
   return 1; 
}

int main() {
   char str[100];

   printf("Digite uma string: ");
   fgets(str, sizeof(str), stdin);


   if (str[strlen(str) - 1] == '\n') {
      str[strlen(str) - 1] = '\0';
   }

   if (isPalindrome(str)) {
      printf("%s é um palíndromo.\n", str);
   } else {
      printf("%s não é um palíndromo.\n", str);
   }

   return 0;
}
