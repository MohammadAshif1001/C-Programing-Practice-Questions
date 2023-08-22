#include <stdio.h>
#define SIZE 5

/****** Programed By Ashif ******\
This code reads the elements of two arrays from the user and uses a for 
loop to add corresponding elements and store the result in a third array. 
It then prints the elements of the third array, which are the sum of the 
corresponding elements of the first and second arrays.*/



// int main() {
//   int a[SIZE];
//   int b[SIZE];
//   int c[SIZE];

//   printf("Enter elements of array 1: ");
//   for (int i = 0; i < SIZE; i++) { 
//     scanf("%d", &a[i]);
//   }

//   printf("Enter elements of array 2: ");
//   for (int i = 0; i < SIZE; i++) {
//     scanf("%d", &b[i]);
//   }

//   for (int i = 0; i < SIZE; i++) {
//     c[i] = a[i] + b[i];
//   }

//   printf("Sum of corresponding elements:\n");
//   for (int i = 0; i < SIZE; i++) {
//     printf("%d ", c[i]);
//   }
//   printf("\n");
 
//   return 0;
// }
void main()
{
	int i,ar1[3],ar2[3],sum[3];

	printf("Enter first array:-\n");
	for(i=0;i<=2;i++)
	{
		printf("ar1[%d]=",i);	
		scanf("%d",&ar1[i]);
	}
	printf("Enter second  array:-\n");	
	for(i=0;i<=2;i++)
	{
		printf("ar2[%d]=",i);	
		scanf("%d",&ar2[i]);
	}
	
	for(i=0;i<=2;i++)
	{
		sum[i]=ar1[i]+ar2[i];
	}
	
	printf("Sum of arrays:-");	
	for(i=0;i<=2;i++)
	{
		printf("\nsum[%d]=%d",i,sum[i]);	
	}
		
} 