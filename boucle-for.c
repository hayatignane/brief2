#include <stdio.h>
 
int main()
{
  int nbr, i, f = 1;
 
  printf("Enter a num to calculate its factorial:\n");
  scanf("%d", &nbr);
 
  for (i = 1; i <= nbr; i++)
    f = f * i;
 
  printf("Factorielle de %d = %d\n", nbr, f);
 
  return 0;
}