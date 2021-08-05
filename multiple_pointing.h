#include <stdio.h>

void get_multiple_pointing(){
  char c = 'x';
  char *pc = &c;
  char **ppc = &pc;
  char ***pppc = &ppc;
  ***pppc = 'y';
  printf("El valor de c es: %c\n", c);
}