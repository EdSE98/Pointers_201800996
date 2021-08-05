#include <stdio.h>

void get_assignment(){
  int value = 18;
  int *ptr_1, *ptr_2;

  ptr_1 = &value;
  printf("El valor de ptr_1 %d\n", *ptr_1);
  ptr_2 = ptr_1;
  printf("El valor de ptr_2 %d\n", *ptr_2);
}