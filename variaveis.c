#include <stdio.h>

// variaveis

int main(){
	// declaracao de variaveis
	int idade; // -> sem valor inicial
	
	// declarando e inicializando
	// int idade_teste = 17; // -> com valor inicial
	
	// escreve algo no console
	printf("digite sua idade: ");
	
	// recebendo dados do usuario 
	scanf("%d", &idade);
	
	// mostrando o dado obtido
	printf("idade informada: %d", idade);	

	/* continuação em estruturas */


	return 0; 
}