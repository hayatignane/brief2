#include <stdio.h>
 
int facto(int n)
{
  int i, f = 1;
 
  for (i = 1; i <= n; i++)
    f = f * i;
 
  return f;
}

int main()
{
  int number;

 
  printf("Enter a num to calculate its factorial:\n");
  scanf("%d", &number);
  if (number<0)
  {
   printf("impossible");
  }
  else{
 
  printf("%d = %d\n", number, facto(number));
  }
 
  return 0;
}