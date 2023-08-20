#include <stdio.h>
#include <stdbool.h>

int main()
{

  int soma(int a, int b)
  {
    int s = a + b;
    return s;
  }

  int sub(int a, int b)
  {
    int s = a - b;
    return s;
  }

  int multi(int a, int b)
  {
    int s = a * b;
    return s;
  }

  printf("CALCULADORA EM C:\n\n");

  int n1, n2, op, res;

  int i = 5;

  while (i != 0)
  {

    printf("DIGITE O PRIMEIRO NUMERO: \n");
    scanf("%d", &n1);
    printf("DIGITE O SEGUNDO NUMERO: \n");
    scanf("%d", &n2);

    printf("\nSE VOCE QUER REALIZAR UMA:\n\nSOMA -> DIGITE 1\n\nSUBTRACAO -> DIGITE 2\n\nMULTIPLICACAO -> DIGITE 3\n\n");
    scanf("%d", &op);

    if (op == 1)
      res = soma(n1, n2);
    if (op == 2)
      res = sub(n1, n2);
    if (op == 3)
      res = multi(n1, n2);

    printf("\nRESULTADO: %d\n", res);

    printf("\nDIGITE '1' PARA FAZER OUTRO CALCULO\nDIGITE '0' PARA SAIR\n");
    scanf("%d", &i);
  }

  return 0;
}
