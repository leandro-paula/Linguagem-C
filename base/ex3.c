    #include<stdio.h>
        #include<stdlib.h>
	   
	    int main(){
		    // Declaração dos vetores com 5 posições:
		    int v1[5], v2[5];
		    int i = 0, j = 0, flag = 1;
		   
		    //preenchendo vetor 1
		    for (i = 0; i < 5; i++){
			   printf("\nInforme o valor do elemento %d do vetor 1: ", i + 1);
			   //Leitura e inserção do valor em cada posição do vetor:
			   scanf("%d", &v1[i]);
		    }
			
			//preenchendo vetor 2
			for (j = 0; j < 5; j++){
				printf("\nInforme o valor do elemento %d do vetor 2: ", j + 1);
				//Leitura e inserçao do valor em cada posição do vetor:
				scanf("%d", &v2[j]);
			}
			system("cls");
			printf("Vetor 1:  ");
			for (i = 0; i < 5; i++){
			     printf(" %d", v1[i]);
			}
            printf("\n\n");
            printf("Vetor 2:  ");
            for(i = 0; i < 5; i++){
                printf(" %d", v2[i]);
            } 	
			printf("\n\n");
			for (i = 0; i < 5; i++){
				for (j = 0; j < 5; j++){
				    //exibindo valores que são comuns aos dois vetores:
				    if(v1[i] == v2[j]){
					   printf("\nValores iguais nas posicoes: %d de v1 e %d v2\n", i + 
1 , j + 1);
					   flag = 0;
				    }
			    }
	        }
	   
            if(flag){
		        printf("\n\nNao existem valores iguais nos dois vetores.");
	        }
            printf("\n\n\n");
	        system("pause");
	    }







	



















































