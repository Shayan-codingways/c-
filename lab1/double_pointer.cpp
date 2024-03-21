#include <stdio.h>

int
main ()
{
  int *singleptr;
  int **doubleptr;
  int var = 98;

  doubleptr = &singleptr;
  singleptr = &var;


  printf ("singleptr  =  %p\n", singleptr);
  printf ("doubleptr  =  %p\n", doubleptr);
  printf ("value of var through singleptr  =  %d\n", *singleptr);
  printf ("value of singleptr through doubleptr  =  %d\n", *doubleptr);
  printf ("value of var through doubleptr  =  %d\n", **doubleptr);
  return 0;
}