
#include<stdio.h>

void soma(int* num, int a, int b) {
    *num = a + b;
}


main(){

 int num;

 soma(&num,2,3);

 printf("%d",num);
}