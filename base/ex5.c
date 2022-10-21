    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int main(){
	    char string1[21]; // = "Brasileiro";
	    char string2[21]; // = "Brasil";
	    char string3[21]; // = string que será buscada dentro das outras duas
	    char letra;       // = 'i';
	    int x, cont1 = 0, cont2 = 0;

	    printf("Digite uma palavra ou nome de ate 20 letras: ");
	    gets(string1);

	    printf("\n\nDigite um outra palavra ou nome de ate 20 letra: ");
	    gets(string2);

	    printf("\n\nInforme uma palavra ou um trecho de nome ate 20 letras para ser buscada: ");
	    gets(string3);

	    printf("n\nAgora digite uma letra para ser buscada nas palavras informadas: ");
	    scanf( "%c", &letra);

	    //Contando a ocorrência de "letra" nas strings
	    for(x = 0; x < strlen(string1); x++){
		    if(string1[x] == letra){
			  cont1++;
		    }
	    }
        for(x = 0; x < strlen(string2); x++) {
            if(string2[x] == letra) {
                cont2++;
            }
        }

        printf("\n\nA letra \"%c\" aparece %d vez(es) na string 1,", letra, cont1);
        printf(" e %d vez(es) na string 2", cont2);

        if(strstr(string1, string3)){
          printf("\nA palavra informada para a busca, esta contida na primeira string informada.");
	    }else{
            printf("\nA palavra informada para a busca, nao existe na primeira string informada.");
	    }

        if(strstr(string2, string3)){
          printf("\nA palavra informada para a busca, esta contida na segunda string informada.");
	    }else{
          printf("\nA palavra informada para a busca, nao existe na segunda string informada.");
	    }

	    printf("\n\n\n");
    }















































































