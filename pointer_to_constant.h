#include <stdio.h>

void get_pointer_to_constant(){
  int v = 18, w = 21;
  const int *ptr = &v;
  ptr = &w; // Esto es válido
  // *ptr = 3; // No es válido
  w = 3;
  printf("El valor de ptr es: %d\n", *ptr);
}