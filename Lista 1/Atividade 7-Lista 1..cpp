#include<stdio.h>

int main(){
	int idade[100],maiorIdade=-1,posicao=0,media[100],soma=0;
	
	for(int i=0;i<100;i++){
		
		printf("Digite aqui a idade:");
		scanf("%i",&idade[i]);
		
		if(idade[i]>maiorIdade){
			maiorIdade=idade[i];
			posicao=posicao+1;
		}
		soma=soma+idade[i];
		
		
	}
	printf("Essa e a maior idade %i anos e sua posicao: %i\n",maiorIdade,posicao);
	printf("Essa aqui e a media da idade:%i",soma/100);
}
