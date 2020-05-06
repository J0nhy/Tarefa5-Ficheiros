//All rights reserved to Custodio Co. Copyright 2020
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, "Portuguese");
	FILE *fp;
	char username[100];
	char password[50];
	char ponto[1] = {';'};
	int i;
	fp = fopen("user.dat","wb");
	
	if(!fp){
	
		printf("Erro na abertura do arquivo.");
		exit(0);}
	else {
	
		printf("O ficheiro aberto corretamente!");
}
	
	printf("\n--------------------------Login:----------------------");
	printf("\nInsira o username: ");
	gets(username);
	printf("\nInsira a password: ");
	gets(password);
	for(i=0; username[i]; i++)
		fputc(username[i], fp);
		fputc(';', fp);
	for(i=0; password[i]; i++)
		fputc(password[i], fp);
		fputc(';', fp);
		
	fclose(fp);
	return 0;		
			
	
	}

