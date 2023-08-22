#include <stdio.h>
#define N 3


/****** Programed By Ashif ******\
This code reads the elements of the array from the user 
and add & * multiply of  two matrices in order NxN.*/

int main() {
  int a[N][N];
  int b[N][N];
  int c[N][N];
  int d[N][N];

  printf("Enter elements of matrix 1:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {  
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter elements of matrix 2:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  // Addition
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }  

  printf("Sum of the matrices:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }

  // Multiplication
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      d[i][j] = 0;
      for (int k = 0; k < N; k++) {
        d[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  printf("Product of the matrices:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", d[i][j]);
    }
    printf("\n");
  }

  return 0;
}
