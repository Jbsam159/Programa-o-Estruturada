#include<stdio.h>

int main(){
	int matricula[100],salario[100],menorSal,maiorSal;
	
	maiorSal=-1;
	menorSal=1000000;
	for(int i=0;i<3;i++){
		
		printf("Digite aqui a matricula do funcionario:");
		scanf("%i",&matricula[i]);
		printf("Digite aqui o salario do funcionario:");
		scanf("%i",&salario[i]);
		
		if(salario[i]<menorSal){
			menorSal=salario[i];
		}
		
		if(salario[i]>maiorSal){
			maiorSal=salario[i];
		}	
		
	}
	printf("Matricula-Salario\n");
	for(int i=0;i<3;i++){
		printf("  %i      %i\n",matricula[i],salario[i]);
	}
	printf("Esse aqui e o menor salario: %i\n",menorSal);
	printf("Esse aqui e o maior salario: %i",maiorSal);
}
