/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while (n)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
        printf("%d",s);
    
    

    return 0;
}
