

#include <stdio.h>
#include <stdio.h>

int main (){
	
	int escolha = 0; 
	printf("Digite o numero:\n");
	scanf(" %d", &escolha);
	
	if (escolha == 1){
		printf("caracter: a\n");
	}else{
		if(escolha == 2){
			printf("caracter: b\n");
		}else{
            if(escolha == 3){
                printf("caracter: c\n");
            }else{
                if(escolha == 4){
                    printf("caracter: d\n");
                }else{
                    printf("nenhuma opcao\n");
				}
			}
		}
	}
	return 0;
}
	