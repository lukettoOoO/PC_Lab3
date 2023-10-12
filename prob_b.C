#include <stdio.h>

void suma(int n){
  int s, i;
  s=0;
  for(i=1; i<n; i++){
    printf("%d", i);
    printf("+");
    s=s+i;
  }
  s=s+n;
  printf("%d", n);
  printf("=");
  printf("%d", s);
}

int main(void){

  int n;

  scanf("%d", &n);
  suma(n);
  
  return 0;
}
