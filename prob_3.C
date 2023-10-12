#include <stdio.h>

int main(void)
{
  int n, i, j, k;
  scanf("%d", &n);

  k=1;
  for(i=1; i<=n; i++){
    printf("*");
    k++;
    for(j=2; j<=n-1; j++){
      if(k==j)
	printf("*");
      else
	printf(" ");
    }
    printf("*\n");
  }
  
  return 0;
}
