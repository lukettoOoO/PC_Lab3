#include <stdio.h>

int main(void){

  int n, impare;
  impare=0;
  scanf("%d", &n);

  if(n<=99 || n>=1000)
    printf("Numar invalid!");
  else{
    while(n!=0){
      if((n%10)%2!=0)
	impare++;
      n=n/10;
    }
    printf("%d", impare);
  }
	 
  return 0;
}
