#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c;

  printf("Digite o coeficiente a do polinômio (ax^2 + bx + c): ");
  scanf("%lf", &a);
  printf("\nDigite o coeficiente b do polinômio (ax^2 + bx + c): ");
  scanf("%lf", &b);
  printf("\nDigite o coeficiente c do polinômio (ax^2 + bx + c): ");
  scanf("%lf", &c);

  double delta = pow(b,2) - 4 * a * c;

  if (a == 0) {

  printf("Isso não é um polinômio de segundo grau.\n");

  } else if (delta > 0) {

  double x1 = (-b + sqrt(delta)) / (2 * a);
  double x2 = (-b - sqrt(delta)) / (2 * a);

  printf("O polinômio tem duas raízes reais: x1 = %.2lf e x2 = %.2lf\n", x1, x2);

  } else if (delta == 0) {

  double x1 = -b / (2 * a);

  printf("O polinômio tem uma raiz real: x = %.2lf\n", x1);

  } else {

  printf("O polinômio não tem raízes reais.\n");

  }

  double x;
  printf("Digite um valor para x: ");
  scanf("%lf", &x);

  double px = (a * pow(x,2)) + (b * x) + c;

  printf("p(x) = %.2lf\n", px);

  system("pause");

  return 0;

}
