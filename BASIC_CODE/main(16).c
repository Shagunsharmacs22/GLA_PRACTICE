/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;


    
    scanf("%d", &a);

    if(a & 1)
    {
        printf("%d is odd.", a);
    }
    else
    {
        printf("%d is even.", a);
    }

    return 0;
}
