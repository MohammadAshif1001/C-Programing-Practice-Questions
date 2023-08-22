#include <stdio.h>

/****** Programed By Ashif ******\
This code opens two files, file1.txt and file2.txt, in read mode using the fopen() function.
It then reads the first character from each file using the getc() function and compares them. 
If the characters are not equal or either of the files has reached the end of file (EOF), 
it breaks out of the loop. If the characters are equal and both files have not reached the end of file, 
it reads the next characters from both files and compares them again.

After the loop is complete, it checks whether the characters are equal. If they are, it 
prints "Files are identical". If they are not, it prints "Files are not identical". 
Finally, it closes both files using the fclose() function.

This code assumes that the two files, file1.txt and file2.txt, are present in the same 
directory as the program. If the files are not present or there is an error opening them, 
it will print "Error opening file".

If the contents of file1.txt and file2.txt are the same, the output of this code will 
be "Files are identical". If the contents of the files are different,*/


int main() {
  FILE *fp1, *fp2;
  int ch1, ch2;

  fp1 = fopen("file1.txt", "r");
  fp2 = fopen("file2.txt", "r");

  if (fp1 == NULL || fp2 == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  ch1 = getc(fp1);
  ch2 = getc(fp2);

  while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2)) {
    ch1 = getc(fp1);
    ch2 = getc(fp2);
  }

  if (ch1 == ch2) {
    printf("Files are identical\n");
  } else {
    printf("Files are not identical\n");
  }

  fclose(fp1);
  fclose(fp2);

  return 0;
}
