#include <stdio.h>
int main()
{
  int  c, d, a[100], b[100];

  printf("Enter array elements\n");

  for (c = 0; c < 10 ; c++)
    scanf("%d", &a[c]);

  for (c = 10 - 1, d = 0; c >= 0; c--, d++)
    b[d] = a[c];

  for (c = 0; c < 10; c++)
    a[c] = b[c];

  printf("The array after reversal:\n");

  for (c = 0; c < 10; c++)
    printf("%d\n", a[c]);

  return 0;
}
