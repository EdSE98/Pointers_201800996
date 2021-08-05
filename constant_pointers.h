#include <stdio.h>

void get_constant_pointers(){
  int a = 10, b = 15;
  int *const ptr = &a;
  *ptr = 3; // Esto es válido
  //ptr = &b; // Esto no es válido
}