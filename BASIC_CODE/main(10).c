/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,r,i,sum=0;
   scanf("%d",&n);
   int temp=n;
   while(n) {
   r=n%10;
   int fact=1;
   for(  i=1; i<=r;i++)
   {
       fact=fact*i;
   }
   sum = sum +fact;
   n=n/10;
   }
   if (temp==sum)
   printf("strong");
   else
   printf("not strong");
   
   
    return 0;
}