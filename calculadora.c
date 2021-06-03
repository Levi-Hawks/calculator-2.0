#include <stdio.h>

int soma (int a, int b)
{
  return (a + b);
}

int subtracao (int a, int b)
{
  return (a - b);
}

int multiplicacao (int a, int b)
{
  return (a * b);
}

int divisao (int a, int b)
{
  return (a / b);
}


void main ()
{
  int x, y, escolha;
  printf("Digite o primeiro número: ");
  scanf("%i", &x);
  printf("Digite o segundo número: ");
  scanf("%i", &y);
  printf("[1] Soma \n[2] Subtração \n[3] Multiplicação \n[4] Divisão");
  printf("\nEscolha uma opção: ");
  scanf("%i", &escolha);

  if (escolha == 1) {
    printf("O resultado da soma de %i com %i é igual a %i\n", x, y, soma(x,y));
  }

  if (escolha == 2) {
    printf("O resultado da subtração de %i com %i é igual a %i\n", x, y, subtracao(x, y));
  }

  if (escolha == 3) {
    printf("O resultado da multiplicação de %i com %i é igual a %i\n", x, y, multiplicacao(x, y));
  }

  if (escolha == 4) {
    printf("O resultado da divisão de %i por %i é igual a %i\n", x, y, divisao(x, y));
  }

}
