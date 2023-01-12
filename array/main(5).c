/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,c=0,s=0,n;
    scanf("%d",&n);
    int a[n];
    printf("enter elememts,");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if (a[i]<0){
            s=s+a[i];
            c++;
        }
    }
printf("sum=%d",s);
printf("count=%d",c);

    return 0;
}
