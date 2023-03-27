#include <stdio.h>
#include <stdlib.h>


int main()
{
  char nome[50], endereco[100], telefone[15];

  printf("Digite o nome do cliente: ");
  fgets(nome, 50, stdin);

  printf("Digite o endereco do cliente: ");
  fgets(endereco, 100, stdin);

  printf("Digite o telefone do cliente: ");
  fgets(telefone, 15, stdin);

  printf("\nDados do cliente:\n");
  printf("Nome: %s", nome);
  printf("Endereço: %s", endereco);
  printf("Telefone: %s", telefone);

  return 0;
}
