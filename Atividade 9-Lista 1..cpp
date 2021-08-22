#include<stdio.h>

int main(){
	char matricula[3][50],tempoEmprego[50],cont=0;
	
	do{
		printf("Digite a matricula:");
		scanf("%s",&matricula[cont]);
		printf("Digite quantidade de meses:");
		scanf("%d",&tempoEmprego[cont]);
		cont++;
	
	
	
	}while (matricula[cont]!=0);
}
