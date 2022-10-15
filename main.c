#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int min =1, max, secreto, chute, tentativas = 0, checa;
    int maior = 1, menor = 0, igual = 2;
    
    
    printf("A maquina ira adivinhar um numero\n");
	printf("(1)Para maior,(0)Para menor (2)Se o numero for igual:\n");
	
	srand(time(NULL));
	chute= rand() % 100;
	
	  do { 
      printf("A maquina chutou o numero: %d \n", chute);
      printf("O número secreto é maior ou menor? ");
      scanf("%d", &checa); 
      
      tentativas++;
      if (checa == menor) {
          max = chute;
          chute=min+rand()%(max-min);
      } else if(checa == maior){
          min = chute;
          chute=min+rand()%(max-min);
      } else if(checa == igual) {
          printf("A maquina chutou o número: %d \n", chute);  
          printf("NUMERO CORRETO!");
          scanf("%d",&tentativas);
       continue;
      } 
  } while (tentativas < 10);
    if (tentativas > 9) {
        printf("Você esta errando, tente novamente!.\n");
        scanf("%d", &tentativas);
    }
  return 0;
  }
