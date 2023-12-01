#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    printf("Nhap vao ky tu vao chuoi 1:\n");
    scanf("%s",&str1);
    int len1 = strlen(str1);
    printf("Nhap vao ky tu vao chuoi 2:\n");
    scanf("%s",&str2);
    int len2 = strlen(str2);
    printf("Do dai chuoi 1 la %d\n",len1);
    printf("Do dai chuoi 2 la %d\n",len2);
    return 0;
}