#include <stdio.h>

int main(int argc, char *argv[]) {


    int dim1 = 10, dim2 = 20, dim3 = 5;
    int array3D[dim1][dim2][dim3];


    int value = 1;
    for (int i = 0; i < dim1; i++) {
    for (int j = 0; j < dim2; j++) {
    for (int k = 0; k < dim3; k++) {

    array3D[i][j][k] = value++;

    }
  }
}

    for (int i = 0; i < dim1; i++) {
    for (int j = 0; j < dim2; j++) {
    for (int k = 0; k < dim3; k++) {

    printf("%d ", array3D[i][j][k]);

    }
    printf("\n");

    }
    printf("\n");

    }

   system("pause");

    return 0;
}
