#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
  FILE *fptr;
  fptr = fopen("./open_test.txt", "w+");
  int i;
  for(i=1;i<argc;i++)
    {
      fprintf(fptr, "%s", argv[i]);
      fprintf(fptr,"\n");
    }
  fclose(fptr);
{
  char str[100];
  FILE *fptr;

  if ((fptr = fopen("./open_test.txt", "r")) == NULL) {
    printf("Error! opening file");

    exit(1);
}
  fscanf(fptr, "%s",str);
  printf("%s\n", str);
  fseek(fptr, 0L, SEEK_END);
  char sz;
  sz = ftell(fptr);
  printf("%d\n", sz);
} 
}
