#include <stdio.h>
#include<string.h>
#include<locale.h>
 
void copy( char *str1,char *str2,char *str3);
void view(char *str1, char *str2, char *str3);
void konk(char *str1, char *str2, char *str3);

int main(void){
	int i, n, v;
	setlocale(LC_ALL, "RUS");
	char str1[30];
	char str2[30];
	char str3[30];
	printf("Введите 3 строки(латиницей) : \n");
	gets(str1);
	gets(str2);
	gets(str3);
	
	printf("Хотите просмотреть строки ? 1-да 0-нет\n");
	scanf("%i", &n);

	if (n == 1){ view(str1, str2, str3); }
	printf("Хотите найти строку  ? 1-да 0-нет\n");
	scanf("%i", &v);
	if (v == 1){
		copy(str1, str2, str3);
	}
	printf("Хотите обьеденить все строки ?1-да 0-нет \n");
	scanf("%i", &i);
	if (i == 1){
		konk(str1, str2, str3);
	}
	
	return 0;
}

void copy(char *str1, char *str2, char *str3){
	char stroka[30];
	printf("Введите строку для поиска\n");
	gets(stroka);
	if (strstr(str1, stroka)){
		printf("1 - строка\n");
	}
	if (strstr(str2, stroka)){
		printf("2 - строка\n");
	}
	if (strstr(str3, stroka)){
		printf("3 - строка\n");
	}

}
void view(char *str1, char *str2, char *str3){
	int i;
	printf("Введите число номер строки для вывода либо 4-для вывода всех строк : ");
	scanf("%i",&i);
	switch (i){
	case 1: puts(str1);
		break;
	case 2: puts(str2);
		break;
	case 3: puts(str3);
		break;
	case 4: puts(str1);
			puts(str2);
			puts(str3);
			break;
	}
}
void konk(char *str1, char *str2, char *str3){
	strcat(str1, str2);
	strcat(str1, str3);

	puts(str1);

}
