#include <stdio.h>

int *ptr_int, var;

void get_indirection_1(){
  float *ptr_float;
  printf("El valor apuntado por p es: %f\n", *ptr_float);
  *ptr_float = 1.5;
}

void get_indirection_2(){
  int local = 57;
  ptr_int = &local;
  var = *ptr_int;
  *ptr_int = 41;
  printf("El valor de ptr_int es: %d\n",*ptr_int);  
  printf("El valor de local es: %d\n",local);
  printf("El valor de var es: %d\n",var);
  
}