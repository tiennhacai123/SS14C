#include<stdio.h>
#include<string.h>
int main(){
    int *px,a = 100;
    int *ptrA = &a;
    printf("gia tri cua a la %d\n",a);
    printf("gia tri cua a la %d\n",*ptrA);
    printf("Dia chi cua bien a la:%x\n",&a);
    printf("Dia chi cua bien a la:%x",&*ptrA);
    return 0;
}