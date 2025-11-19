#include <stdio.h>

struct pessoas
{
   char nome[50];
   int idade;
};

 int main(void) {

   struct pessoas  Pessoas[3];

   for (int i = 0; i < 4; i++) {
      printf("\nDigite o Nome da Pessoa%d: ", i+1);
      fgets(Pessoas[i].nome, 50, stdin);

      printf("\ndigite a idade %d: ", i+1);
      scanf("%d", &Pessoas[i].idade);
      getchar();

   }
   printf("\n ------lista---------");

   for (int i = 0; i < 4; i++)
   {
      printf("nome: %sidade: %d\n\n", Pessoas[i].nome, Pessoas[i].idade);

   }
   return 0;
    
}