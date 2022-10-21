#include <stdio.h>
#include<stdlib.h>


int main(){
	int escolha = 0;
	printf("Digite o numero:\n");
	scanf( "d", &escolha);
	switch(escolha){

		case 1:
		    printf("caracter: X\n");
		break;

		case 2:
		    printf("caracter: Y\n");
		break;

		case 3:
		    printf("caracter: W\n");
		break;

		case 4:
		    printf("caracter: Z\n");
		break;

		default:
		    printf("nenhuma opcao");
		break;

	}
	return 0;
}


	
	
	
	
