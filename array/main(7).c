/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[4],i,c=0,m=0;
    printf("enter elemnts");
    for(i=0;i<4;i++){
scanf("%d",&a[i]);
}
for(i=0;i<4;i++){
    if(a[i]%2==0)
    c++;
    else 
    m++;
}
    printf("counts of even elements%d\n",c);
    printf("counts of odd elements%d\n",m);

    return 0;
}
