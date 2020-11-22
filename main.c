#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main(void) {
  printf("Hello World\n");

  printf("Teste de commit 1");

  int i=0;
  while(i<10){
	printf("\nGIT\t");
	i++;

	printf("Soma = %d", somar(rand()%10, i));
  }


  return 0;
}