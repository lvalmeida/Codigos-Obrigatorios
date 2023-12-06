#include <stdio.h>
#include <math.h>

int main() {
  double cateto1, cateto2, hipotenusa, perimetro, area;

  printf("Informe medida do cateto oposto:");
  scanf("%lf", &cateto1);

  printf("Informe medida do cateto adjascente:");
  scanf("%lf", &cateto2);

  hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
  perimetro = cateto1 + cateto2 + hipotenusa;
  area = cateto2 * cateto1 / 2;

  printf("A hipotenusa é: %lf\n", hipotenusa);
  printf("O perimetro é: %lf\n", perimetro);
  printf("A area é: %lf\n", area);

  system("pause");

  return 0;
}
