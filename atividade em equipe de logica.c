#include<stdio.h>
#include<locale.h>
#include <limits.h>
#define TAM 5

 int main(){
 setlocale(LC_ALL,"");	
 
 int maiorNumero = INT_MIN, menorNumero = INT_MAX;
 int numero[TAM], pares = 0, impares = 0, positivo = 0, negativo = 0, quantidade = 0;	
 int i;	
 float mediaImpar, mediaPar, somaPar = 0, somaImpar = 0, mediaTotal , somaTotal = 0;
 
 
 	for(i=0;i<TAM;i++){
	 	printf("Digite o %iº número: ",i+1);
		scanf("%i",&numero[i]);
		fflush(stdin);
		 
		somaTotal += numero[i];	
	 		
	 	if(numero[i] % 2 == 0) {
	 		pares++;
			somaPar+= numero[i];
	 	}	
	    
		else{
	    	impares++;
	    	somaImpar+= numero[i];
		} 
		
		if(numero[i] > 0){
		  	positivo++;
		}
	 	
		else if(numero[i] < 0){
	 		negativo++;
		}
			
		if(numero[i] > maiorNumero){
			maiorNumero = numero[i];
		}
		if(numero[i] < menorNumero){
			menorNumero = numero[i];
		}
	}
	 
	mediaPar = somaPar / pares;
	mediaImpar = somaImpar / impares;
	mediaTotal = somaTotal / 5;
	 
	printf("\n=== Exibindo dados === \n");
	printf("Quantidades de números pares:%i \n",pares);
	printf("Quantidades de números ímpares:%i \n",impares);
	printf("Maior número: %i \n",maiorNumero);
	printf("Menor número: %i \n",menorNumero);
	printf("Quantidades de números positivos: %i \n",positivo);
	printf("Quantidades de números negativos: %i \n",negativo);
	printf("Quantidade de números inseridos: %i \n",TAM);
	printf("Média Pares:  %.1f\n", mediaPar);
 	printf("Média ímpares:  %.1f\n", mediaImpar);
 	printf("Média Total: %.1f\n", mediaTotal);
 	
 	printf("\nNúmeros Digitados na ordem Inversa: \n");
 	
	 for(i= TAM - 1;i >= 0 ;i--){
 		printf("%iº número: %i\n",i+1, numero[i]);
	 }
	 
	 return 0;
	}
