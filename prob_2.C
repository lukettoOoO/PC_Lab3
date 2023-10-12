#include <stdio.h>

int main(void) {

  //citire si afisare numere
  int n, m, i;
  scanf("%d %d", &n, &m);
  // printf("%d %d", n, m);
  if(n<0 || m>=n)
    printf("Numere introduse nu sunt corecte!\n");
  else {
    printf("Numerele sunt valide.\n");
  }

  
  for(i=0; i<n; i++)
    printf("%d ", i%(m+1));
  
  return 0;
}
