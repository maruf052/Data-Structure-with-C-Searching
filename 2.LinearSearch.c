#include <stdio.h>
int main()
{
  int array[100], search, i, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i = 0; i < n; i++)
  {
    if (array[i] == search)    /* If required element is found */
    {
      printf("%d is present at Position: %d.\n", search, i+1);
      printf("%d is present at Index no %d.\n", search, i);
      break;
    }
  }
  printf("i = %d",i);

  if (i == n)
    printf("%d is n't present in the array.\n", search);

  return 0;
}


