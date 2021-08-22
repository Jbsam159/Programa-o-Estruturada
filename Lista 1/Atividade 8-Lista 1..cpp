#include<stdio.h>

int main(){
	int idade[100],maiorIdade=-1,posicao=0;
	
	for(int i=0;i<5;i++){
		
		printf("Digite aqui a idade:");
		scanf("%i",&idade[i]);
		
		if(idade[i]>maiorIdade){
			maiorIdade=idade[i];
			posicao=posicao+1;
		}
		
	}
	printf("Essa e a maior idade %i anos e sua posicao: %i",maiorIdade,posicao);
}
