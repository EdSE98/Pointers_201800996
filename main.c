#include <stdio.h>
#include "referencing.h"
#include "declaration.h"
#include "assignment.h"
#include "dereferencing.h"
#include "checking.h"
#include "indirection.h"
#include "multiple_pointing.h"
#include "constant_pointers.h"
#include "pointer_to_constant.h"
#include "arrays.h"

int main(void) {
  printf("Practice\n");
  get:get_referencing();  
  get_declaration();
  get_assignment();
  get_dereferencing_1();
  get_dereferencing_2();
  get_checking();
  get_indirection_1();
  get_indirection_2();
  // Indirection
  var = *ptr_int;
  printf("El valor de var es %d\n", var);
  get_multiple_pointing();
  get_constant_pointers();
  get_pointer_to_constant();
  get_array_1();
  return 0;
}
