#include <stdio.h>

void get_dereferencing_1(){
  int x = -33, y;
  int *p;
  p = &x;
  printf("El valor de x es: %d \n", *p);   
  y = *p + 3;
  printf("El valor de y es: %d \n", y);
}

void get_dereferencing_2(){
  struct Articulo{
    char nombre[20];
    char descripcion[100];
    float precio;
  };
  
  struct Articulo art;
  struct Articulo *ptr_art = &art;

  (*ptr_art).precio = 50.38;
  printf("Precio: %f \n", (*ptr_art).precio);

  ptr_art->precio = 51.6;
  printf("Precio: %f \n", ptr_art->precio);
}