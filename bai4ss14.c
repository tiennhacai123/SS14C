#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int printMenu(){
	printf("Menu\n");
	printf("1. Nhap vao mang\n");
	printf("2. In ra mang\n");
	printf("3. Sao chep sang mang khac\n");
	printf("4. Nhap vao mang khac doi cho cho nhau\n");
	printf("5. Dao nguoc mang\n");
	printf("6. Nhap vao 1 ki tu, tim kiem ki tu do trong mang\n");
	printf("7.Thoat\n");
}
// Nhap mang
int insert(int *pointer, int n, int *currentIndex){
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", *currentIndex);
		scanf("%d", (pointer + *currentIndex));
		(*currentIndex)++;
	}
}
// In mang
int print(int *pointer, int n){
	printf("%d\n", n);
	printf("Mang dc in la:\n");
		for(int i = 0; i < n; i++){
			printf("%d\n", *(pointer + i));
	}
}
// Sao chep mang
int copy(int *ptr1, int *ptr2, int n){
	for(int i = 0; i < n; i++){
		*(ptr2 + i) = *(ptr1 + i);
		printf("arrCopy[%d] = %d\n", i, *(ptr2 + i));
	}
}
//Dao nguoc
int reverse(int *ptr, int n){
	printf("Mang sau khi duoc dao nguoc la\n");
	for(int i = n - 1; i>=0; i--){
		printf("arr[%d] = %d\n",i ,*(ptr + i));
	}
}
// Ham main
int main(){
	int arr[100];
	int arrCopy[100];
	int newArr[100];
	int currentIndex;
	int key;
	while(1){
		printMenu();
		int choice;
		int size;
		printf("Moi nhap lua chon\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu\n");
				scanf("%d",&size);
				insert(arr, size, &currentIndex);
				break;
			case 2:
				print(arr, currentIndex);			
				break;
			case 3:
				copy(arr, arrCopy, currentIndex);
				break;
			case 4:
				break;
			case 5:
				reverse(arr, currentIndex);
				break;
			case 6:
				break;
			case 7:
				exit(0);	
		}
	}
}