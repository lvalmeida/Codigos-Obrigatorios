#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 10000

  void bubbleSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {

    if (array[j] > array[j + 1]) {

    int temp = array[j];
    array[j] = array[j + 1];
    array[j + 1] = temp;
            }
        }
    }
}

  int calcularMedia(int array[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += array[i];
    }
    return soma / n;
}

 int calcularMediana(int array[], int n) {
    if (n % 2 == 0) {

        return (array[n / 2 - 1] + array[n / 2]) / 2.0;
    } else {

        return array[n / 2];
    }
}

   int calcularDesvioPadrao(int array[], int n, int media) {
    int somaQuadrados = 0;
    for (int i = 0; i < n; i++) {
        somaQuadrados += pow(array[i] - media, 2);
    }
    return sqrt(somaQuadrados / n);
}

 void encontrarValoresRepetidos(int array[], int n) {
    int valorAtual = array[0];
    int contagem = 1;

    for (int i = 1; i < n; i++) {
        if (array[i] == valorAtual) {
            contagem++;
        } else {
            printf("Valor: %d, Quantidade: %d\n", valorAtual, contagem);
            valorAtual = array[i];
            contagem = 1;
        }
    }


    printf("Valor: %d, Quantidade: %d\n", valorAtual, contagem);
}

int* removerRepetidos(int array[], int n, int* novoTamanho) {
    int* novoArray = (int*)malloc(n * sizeof(int));
    if (!novoArray) {

        exit(EXIT_FAILURE);
    }

    int valorAtual = array[0];
    novoArray[0] = valorAtual;
    *novoTamanho = 1;

    for (int i = 1; i < n; i++) {
        if (array[i] != valorAtual) {
            valorAtual = array[i];
            novoArray[*novoTamanho] = valorAtual;
            (*novoTamanho)++;
        }
    }

    return novoArray;
}

int main(int argc, char *argv[]) {
    int myArray[TAM];

    srand(time(NULL));

    printf("%-10s %13s\n", "Elemento", "Valor");

    for (int i = 0; i < TAM; i++) {
        myArray[i] = rand() % 1001;
        printf("%7d %13d\n", i + 1, myArray[i]);
    }

    bubbleSort(myArray, TAM);

    printf("\nArray Ordenado:\n");
    printf("%-10s %13s\n", "Elemento", "Valor");
    for (int i = 0; i < TAM; i++) {
        printf("%7d %13d\n", i + 1, myArray[i]);
    }

    printf("\n3 Menores Números:\n");
    for (int i = 0; i < 3; i++) {
    printf("%d\n", myArray[i]);
   }

    printf("\n3 Maiores Números:\n");
    for (int i = TAM - 1; i >= TAM - 3; i--) {
    printf("%d\n", myArray[i]);
   }

  double media = calcularMedia(myArray, TAM);
  double mediana = calcularMediana(myArray, TAM);
  double desvioPadrao = calcularDesvioPadrao(myArray, TAM, media);

  printf("\nMédia: %f\n", media);
  printf("Mediana: %f\n", mediana);
  printf("Desvio Padrão: %f\n", desvioPadrao);

  printf("\nValores Repetidos:\n");
  encontrarValoresRepetidos(myArray, TAM);

  int novoTamanho;
  int* novoArray = removerRepetidos(myArray, TAM, &novoTamanho);

  printf("\nNovo Array sem Repetições:\n");
  printf("%-10s %13s\n", "Elemento", "Valor");
  for (int i = 0; i < novoTamanho; i++) {

  printf("%7d %13d\n", i, novoArray[i]);
  }

  media = calcularMedia(novoArray, novoTamanho);
  mediana = calcularMediana(novoArray, novoTamanho);
  desvioPadrao = calcularDesvioPadrao(novoArray, novoTamanho, media);

  printf("\nMédia (Novo Array): %f\n", media);
  printf("Mediana (Novo Array): %f\n", mediana);
  printf("Desvio Padrão (Novo Array): %f\n", desvioPadrao);

  free(novoArray);

system("pause");

    return 0;
}
