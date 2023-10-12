#include <stdio.h>

/*void patrat(int n){
  printf("\n");
  for(i=1; i<=n; i++)
    printf("*");
    }*/

void latura1(int n){
  int i;
  for(i=1; i<=n; i++)
    printf("*");
  printf("\n");
}

void latura23(int n){
  int i, j;
  for(i=1; i<=n-2; i++){
    printf("*");
    for(j=1; j<=n-2; j++)
      printf(" ");
    printf("*\n");
  }
}

void latura4(int n){
  int i;
  for(i=1; i<=n; i++)
    printf("*");
}
int main(void){

  int n;
  scanf("%d", &n);

  latura1(n);
  latura23(n);
  latura4(n);
  
  return 0;
}
