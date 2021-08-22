#include<stdio.h>

int main(){
    float altura[5];

   for(int i=0;i<5;i++){
       printf("Escreva aqui sua altura:");
       scanf("%f",&altura[i]);
   }
   
   for(int i=0;i<5;i++){
   		printf("Essa aqui e a altura:%f\n",altura[i]);
	}
}
