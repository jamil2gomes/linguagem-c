#include<stdio.h>


void potenciaPorValor(int a, int b) {
    int resultado = 1;
    for(int i = 0; i < b; i++) {
        resultado = resultado * a;
    }

    printf("O resultado é %d", resultado);
}

void potenciaPorReferencia(int* resultado, int a, int b) {
    *resultado = 1;
    for(int i = 0; i < b; i++) {
        *resultado = *resultado * a;
    }
}

 main(){

    potenciaPorValor(2,3);


    int res;
    potenciaPorReferencia(&res, 2, 3);

    printf("%d",res);
}