#include<stdio.h>

int main()
{
  int i = 545;
  char c = 'a';
  float f = 12.345;
  double d = 123.456;
  unsigned int ui = 7;
  short int si = 2;

  printf("int i value: %d and size: %lu bytes\n", i, sizeof(i));
  printf("char c value: %d and size: %lu bytes\n", c, sizeof(c));
  printf("int f value: %d and size: %lu bytes\n", f, sizeof(f));
  printf("int d value: %d and size: %lu bytes\n", d, sizeof(d));
  printf("int ui value: %d and size: %lu bytes\n", ui, sizeof(ui));
  printf("int si value: %d and size: %lu bytes\n", si, sizeof(si));
}

