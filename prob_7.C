#include <stdio.h>

int suma_divizori(unsigned int n){
  unsigned int s;
  s=0;
  for(int i=1; i<=n; i++)
    if(n%i==0)
      s=s+i;
  return s;
}

int main(void)
{
  unsigned int n;
  int i;
  scanf("%u", &n);

  for(i=1; i<n; i++)
    if(n%i==0){
      printf("%d", i);
      printf("+");
    }
  printf("%u", n);
  printf("=");
  printf("%d", suma_divizori(n));
  return 0;
}
