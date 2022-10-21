  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  
  int main(){
	  int i, j, cont = 0;
	  char string1[41];
	  char string2[41]; //será usada como temporário
	  
	  printf("Digite um pequeno texto, ate 40 letras: \n\n");
	  gets(string1);
	  
	  for(i = 0; i< strlen(string1); i++){
		  if(string1[i] == ' '){
			  cont++;
		  }
      }
      printf("\n\nO texto informado tem %d espaços", cont);

      for(i = 0, j = 0; i < strlen(string1); i++, j++){
          if(string1[j] == ' '){
              j++;
		  }
          string2[i] = string1[j];
	  }
      stpcpy(string1, string2);
	  printf("\n\nNovo texto com espaços eliminados:\n\n");
	  puts(string1); //poderia exibir a string2 também, se fosse o caso...
	  
  }	  
			  































