#include <stdio.h>
#define S 5 /*Size of array S*/

/****** Programed By Ashif ******\
This code reads the elements of the array from the user
and uses a for loop to find the minimum and maximum element.
It then prints the minimum and maximum element.*/

int main()
{
  int a[S];
  int min, max;

  printf("Enter elements of the array: ");
  for (int i = 0; i < S; i++)
  {
    scanf("%d", &a[i]);
  }

  min = max = a[0];
  for (int i = 1; i < S; i++)
  {
    if (a[i] < min)
    {
      min = a[i];
    }
    if (a[i] > max)
    {
      max = a[i];
    }
  }

  printf("Minimum element: %d\n", min);
  printf("Maximum element: %d\n", max);

  return 0;
}
