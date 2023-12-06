#include <stdio.h>
#include <math.h>

int main() {
  float h, w, imc, hC, iW; // hC = altura em cm; iW = peso ideal
  char sex;

  printf("Insira sua altura (m): ");
  scanf("%f", &h);

  printf("Insira seu peso (kg): ");
  scanf("%f", &w);

  printf("Marque seu sexo (F/M): ");
  scanf(" %c", &sex);

  imc = w / pow(h, 2);

  if (sex == 'F') {

      printf("\nÍndice de Massa Corporal: %f", imc);
      hC = h * 100;
      iW = hC - 100 - ((hC - 150) / 2);
    if (imc < 19.0) {
      printf("\nFaixa: Abaixo do peso");
    } else if (imc >= 19.0 && imc < 23.9) {
      printf("\nFaixa: Peso normal");
    } else if (imc >= 24.0 && imc < 28.9) {
      printf("\nFaixa: Sobrepeso");
    } else if (imc >= 29.0 && imc < 33.9) {
      printf("\nFaixa: Obesidade I");
    } else if (imc >= 34.0 && imc < 38.9) {
      printf("\nFaixa: Obesidade II");
    } else if (imc >= 39.0) {
      printf("\nFaixa: Obesidade III");
    }
      printf("\nPeso Ideal: %f", iW);
  } else if (sex == 'M') {

     printf("\nÍndice de Massa Corporal: %f", imc);
      hC = h * 100;
      iW = hC - 100 - ((hC - 150) / 4);
    if (imc < 20.0) {
      printf("\nFaixa: Abaixo do peso");
    } else if (imc >= 20.0 && imc < 24.9) {
      printf("\nFaixa: Peso normal");
    } else if (imc >= 25.0 && imc  < 29.9) {
      printf("\nFaixa: Sobrepeso");
    } else if (imc >= 30.0 && imc < 34.9) {
      printf("\nFaixa: Obesidade I");
    } else if (imc >= 35.0 && imc < 39.9) {
      printf("\nFaixa: Obesidade II");
    } else if (imc >= 40.0) {
      printf("\nFaixa: Obesidade III");
    }
     printf("\nPeso Ideal: %f", iW);
  }

  system("pause");

  return 0;
}
