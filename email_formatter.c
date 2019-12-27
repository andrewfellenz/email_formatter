#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
  FILE *fptr;
  fptr = fopen("./test_template1.txt", "r");

  // determine file size and set 
  char fsize;
  fseek(fptr, 0L, SEEK_END);
  fsize = ftell(fptr);
  rewind(fptr);
  char *email = malloc(fsize + 100);

  fread(email, 1, fsize, fptr);
  printf(email, argv[1], argv[2], argv[3]);

  fclose(fptr);
}
