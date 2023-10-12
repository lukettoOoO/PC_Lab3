#include <stdio.h>

int main(void)
{
  int i, j, rez;

  for(i=0; i<=10; i++)
    for(j=0; j<=10; j++){
      printf("%d", i);
      printf("*");
      printf("%d", j);
      printf("=");
      rez=i*j;
      printf("%d", rez);
      printf("\n");
    }
  
  return 0;
}
