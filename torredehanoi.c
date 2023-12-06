#include <stdio.h>

int count = 0;
int quantidade = 0;

void TorredeHanoi (int origem, int destino, int auxiliar, int quantidade ){

  if(quantidade == 1){
    printf("Move de %d para %d\n",origem, destino);
    count+=1;

  }else{

TorredeHanoi(origem,auxiliar,destino,quantidade-1);
TorredeHanoi(origem,destino,auxiliar,1);
TorredeHanoi(auxiliar,destino,origem,quantidade-1);
  }
}

int main (){

  printf("Digite quantidade de discos: ");
  scanf("%d", &quantidade);

  TorredeHanoi(1,2,3,quantidade);
  printf("Quantidade de discos:%d\n", quantidade);
  printf("Número de movimentos: %d\n", count);

  system("pause");

  return 0;
}
