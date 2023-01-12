/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  if(a>=0)
  {
      if(a>0)
      printf("%d is  positive",a);
      else
      printf("%d is zero",a);
  }
  else 
  printf("%d is negative",a);

    return 0;
}
