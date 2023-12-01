#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//In menu
int printMenu(){
	printf("\nMenu\n");
	printf("1. Nhap vao mang\n");
	printf("2. In ra mang\n");
	printf("3. Sao chep mang vao mang khac\n");
	printf("4. Nhap vao chuoi khac, them chuoi do vao chuoi ban dau\n");
	printf("5. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
	printf("6. In ra chuoi dao nguoc\n");
	printf("7. Thoat\n");
}
// Sao chep chuoi
int cpyStr(char *str, char *des){
    while(*str != '\0'){
    	*des = *str;
    	str++;
    	des++;
    }
    *des = '\0';
}
// Dao Nguoc chuoi
int reserveStr(char *str){
	int length = strlen(str);
	for(int i = length;i>=0;i--){
		printf("%c",str[i]);
	}
	printf("\n");
}
// Main
int main(){
	char str[100];
	char desStr[100];
	char addstr[50];
	char str1[100];
	int length=0;
	while(1){
		printMenu();
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				str[100];
				printf("Nhap vao mang: ");
				scanf("%s",str);
				break;
			case 2:
				printf("Mang vua nhap la: ");
				printf("%s",str);
				break;
			case 3:
			    printf("Mang nguon la: %s\n",str);
			    cpyStr(str,desStr);
			    printf("Mang da sao chep la: %s",desStr);
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				printf("Chuoi dao nguoc la:");
				reserveStr(str);
				break;
			case 7:
				exit(0);
		}
	}
	return 0;
}
