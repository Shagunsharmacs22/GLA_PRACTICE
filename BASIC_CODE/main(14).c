/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int n,r,s=0;
    
    scanf("%d",&n);
   int temp=n,l=(log10(n)+1);
    while (n)
    {
        r=n%10;
        s=s+pow(r,l);
        n=n/10;
    }
    
       if (temp==s)
       printf("armstrong");
       else
       printf("not a armstrong");
    

    return 0;
}
