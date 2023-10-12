#include <stdio.h>

int main(void)
{
  unsigned int n, s;
  scanf("%u", &n);

  s=0;
  while(n>=10){
    s=s+n%10;
    printf("%u", n%10);
    printf("+");
    n=n/10;
  }
  s=s+n%10;
  printf("%u", n%10);
  printf("=");
  printf("%u\n", s);
  
  return 0;
}
