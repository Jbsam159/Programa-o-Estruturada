#include<stdio.h>

int main(){
	char letras[30];
	
	for(int i=0;i<5;i++){
		printf("Digite aqui uma letra:");
		fflush(stdin);
		scanf("%c",&letras[i]);
	}
	
	printf("%c \n",letras[i]);
}
