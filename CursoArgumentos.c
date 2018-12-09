#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]) {

    /* Regionalização */
    setlocale(LC_ALL, "portuguese");

if(argc ==1){
  printf("\n Programa sem Parâmetros");
} else {
  int soma = 0, i = 0;
  printf("Somando os Parâmetros DE %s: \n\n",argv[0] );
  for(i = 1; i < argc; i++)
    soma = soma + atoi(argv[i]); // Função atoi() converte string para inteiro.

    printf("\n Soma = %d\n ", soma);
}

  return 0;
}
