/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,r,s=0;
    scanf("%d",&n);
   int temp=n;
    while (n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    
       if (temp==s)
       printf("palindrome");
       else
       printf("not a palindrome");
    

    return 0;
}
