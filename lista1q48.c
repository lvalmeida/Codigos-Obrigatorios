#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  printf("\n\n\nCRAPS\n\n\n");

  srand(time(NULL));

  int dado1 = (rand() % 6) + 1;
  int dado2 = (rand() % 6) + 1;
  int ponto, soma = dado1 + dado2, novaSoma;

 printf("Primeiro lançamento: %d + %d = %d\n",  dado1, dado2, soma);

  if ( soma == 7 || soma == 11) {
    printf("%d, Você ganhou!:)", soma);

  } else if ( soma == 2 || soma == 3 || soma == 12) {
    printf("%d, Perdeu!:( A casa vence.", soma);

  } else {
    ponto = soma;
    printf("Ponto é: %d\n", ponto);

    while(1) {

    dado1 = (rand() % 6) + 1;
    dado2 = (rand() % 6) + 1;
    novaSoma = dado1 + dado2;

    printf("Lançamento: %d + %d = %d\n",  dado1, dado2, novaSoma);

    if (novaSoma == ponto) {
       printf("%d, Você ganhou!:)", novaSoma);
       break;

    } else if (novaSoma == 7) {
      printf("%d, Perdeu!:( A casa vence.", novaSoma);
      break;
    }
    }

  }


  return 0;
}
