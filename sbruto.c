#include <stdio.h>

int main() {
  float sbruto, sbrutomenos, sliquido, inss, irpf, vale, sminimo;

  printf("\nValor do sal�rio bruto:");
  scanf("%f", &sbruto);

  printf("\nValor do vale alimenta��o (insira 0 caso n�o receba):");
  scanf("%f", &vale);

  inss = sbruto * (9.0/100);
  irpf = sbruto * (27.7/100);
  sbrutomenos = sbruto - inss;
  sliquido = sbrutomenos - irpf - vale;

  if (sliquido < 1320){
    sminimo = 1320 + vale;
    printf("Sal�rio l�quido:R$%2.f", sminimo);
  } else
  if (sliquido > 1320){
    printf("Sal�rio l�quido:R$%2.f", sliquido);
  }

  system("pause");

  return 0;
}
