/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a>b)
   {
   if(a>c)
   printf("%d is maximum",a);
   else
   printf("%d is maximum",c);
   }
   else// (b>a)
    {
   if(b>c)
   printf("%d is maximum",b);
   else
   printf("%d is maximum",c);
   }
    return 0;
}
