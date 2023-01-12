/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{  
    int n,a,i,b=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
   { a=n%i;
    if(a==0)
    b++;
   }
if (b==2)
printf("prime");
else 
printf("no prime ");

    
    

    return 0;
}
