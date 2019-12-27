// still need to check for windows vs linux OS
#include <stdio.h> // default library
#include <stdlib.h> //stdlib is required to use malloc

void main(int argc, char *argv[])
{
  FILE *fptr;
  fptr = fopen(argv[1]z, "r");

  // determine file size and set 
  char fsize;
  fseek(fptr, 0L, SEEK_END);
  fsize = ftell(fptr);
  rewind(fptr);
  char *email = malloc(fsize + 1);

  fread(email, 1, fsize, fptr);
  printf(email, argv[2], argv[3], argv[4]);

  fclose(fptr);
}
