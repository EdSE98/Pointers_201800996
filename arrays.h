#include <stdio.h>

void get_array_1(){
  int lista_arr[5] = {10,20,30,40,50};
  int *lista_ptr;
  lista_ptr = lista_arr;
  printf("%d\n",lista_arr[0]);
  printf("%d\n",lista_ptr[0]);
  printf("%d\n",*lista_arr);
  printf("%d\n",*lista_ptr);
  printf("%d\n",*(lista_arr+1));
  printf("%d\n",lista_arr[3]);
  printf("%d\n",lista_ptr[3]);
}

void get_array_2(){
  int lista[5]={10,20,30,40,50};
  int*p;
  p=&lista[3];
  p=lista +3;
  printf("%d\n",lista[2]);
  printf("%d\n",*(lista+2));
  printf("%d\n"*p);
}