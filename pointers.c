#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

  float d = 2.34;
  float e = 5.67;

  float* ptrtod = &d;
  float* ptrtoe = &e;

  printf("The value of d is %d\n", d);
  printf("The address of d is %p\n", (void*)ptrtod);

  printf("The address of e is %p\n", (void*)ptrtoe);
  printf("The value of e is %d\n", e);

  float temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;


  printf("The value of d is %d\n", d);
  printf("The address of d is %p\n", (void*)ptrtod);
  float d = 2.34;
  float e = 5.67;

  float* ptrtod = &d;
  float* ptrtoe = &e;

  printf("The value of d is %d\n", d);
  printf("The address of d is %p\n", (void*)ptrtod);

  printf("The address of e is %p\n", (void*)ptrtoe);
  printf("The value of e is %d\n", e);

  float temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;


  printf("The value of d is %d\n", d);
  printf("The address of d is %p\n", (void*)ptrtod);

  printf("The address of e is %p\n", (void*)ptrtoe);
  printf("The value of e is %d\n", e);
}



