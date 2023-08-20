#include <stdio.h>
#include <stdbool.h>

int main()
{

  int soma(int a, int b)
  {
    int s = a + b;
    return s;
  }

  printf("CALCULADORA EM C:\n\n");

  int n1, n2, op, res;

  int i = 5;

  while (i != 0)
  {

    printf("DIGITE O PRIMEIRO NÚMERO: \n");
    scanf("%d", &n1);
    printf("DIGITE O SEGUNDO NÚMERO: \n");
    scanf("%d", &n2);

    printf("\nSE VOCE QUER REALIZAR UMA\nSOMA: DIGITE 1\n");
    scanf("%d", &op);

    if (op == 1)
      res = soma(n1, n2);

    printf("\nRESULTADO: %d\n", res);

    printf("\nDIGITE '1' PARA FAZER OUTRO CÁLCULO\nDIGITE '0' PARA SAIR\n");
    scanf("%d", &i);
  }

  return 0;
}
