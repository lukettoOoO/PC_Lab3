#include <stdio.h>

int main(void)
{
  int n, anterior;
  scanf("%d", &n);
  
  anterior=n;
  while(anterior>10){
    printf("%d ", anterior);
    anterior=anterior-(n/10);
  }

  return 0;
}
