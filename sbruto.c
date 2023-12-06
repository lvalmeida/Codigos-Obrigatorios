#include <stdio.h>

int main() {
  float sbruto, sbrutomenos, sliquido, inss, irpf, vale, sminimo;

  printf("\nValor do salário bruto:");
  scanf("%f", &sbruto);

  printf("\nValor do vale alimentação (insira 0 caso não receba):");
  scanf("%f", &vale);

  inss = sbruto * (9.0/100);
  irpf = sbruto * (27.7/100);
  sbrutomenos = sbruto - inss;
  sliquido = sbrutomenos - irpf - vale;

  if (sliquido < 1320){
    sminimo = 1320 + vale;
    printf("Salário líquido:R$%2.f", sminimo);
  } else
  if (sliquido > 1320){
    printf("Salário líquido:R$%2.f", sliquido);
  }

  system("pause");

  return 0;
}
