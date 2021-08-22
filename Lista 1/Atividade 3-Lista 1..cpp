#include<stdio.h>

int main(){
	int valor;
	int soma=0;
	
	for(int i=0;i<100;i++){
		printf("Digite aqui um valor:");
		scanf("%i",&valor);
		soma=soma+valor;
	}
	printf("%i",soma);
}
