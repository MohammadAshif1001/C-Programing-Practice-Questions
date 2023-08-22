#include <stdio.h>
#include <string.h>

/****** Programed By Ashif ******\
This code declares three character arrays and initializes them with some strings.*/


int main() {
  char s1[10] = "B-Tech";
  char s2[10] = "CSE";
  char s3[10];

  // strlen()
  int len = strlen(s1);
  printf("Length of string s1: %d\n", len);

  // strcat()
  strcat(s1, s2);
  printf("Concatenated string: %s\n", s1);

  // strcpy()
  strcpy(s3, s1);
  printf("Copied string: %s\n", s3);

  return 0; 
}
