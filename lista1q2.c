#include <stdio.h>
#include <ctype.h>

int main() {

  char ch1, ch2, ch3;

  printf("\n\nPara caractere ch1\n\n");

  printf("Digite um caractere: ");
  scanf("%c", &ch1);

 ch1 >= 'A' && ch1 <= 'Z' ? printf("O caractere digitado é uma letra maiuscula: %c\n",ch1) :
 ch1 >= 'a' && ch1 <= 'z' ? printf("O caractere digitado é uma letra minuscula: %c\n",ch1) :
 ch1 >= '0' && ch1 <= '9' ? printf("O caractere digitado é um numero: %c\n",ch1) : printf("O caractere digitado é um símbolo: %c", ch1);

  printf("\n\nPara caractere ch2\n\n");

  ch2 = 81;

  printf("Caractere em char: %c\n ", ch2);

  printf("Caractere em decimal: %d\n ", ch2);

  printf("Caractere em octal: %o\n ", ch2);

  printf("Caractere em hexadecimal: %X\n ", ch2);


  printf("\n\nPara caractere ch3\n\n");

  if (ch2 >= 'A' && ch2 <= 'Z') {
    ch3 = ch2 + ('a' - 'A');

    printf("Caractere em char: %c\n ", ch3);

    printf("Caractere em decimal: %d\n ", ch3);

    printf("Caractere em octal: %o\n ", ch3);

    printf("Caractere em hexadecimal: %X\n ", ch3);

  } else {
    printf("O caractere atribuído a ch2 não é uma letra maiúscula\n");
  }

  system("pause");

 return 0;
}
