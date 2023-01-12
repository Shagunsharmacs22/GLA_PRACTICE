/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int sum(int*,int*);
int main(){
    int a,b;
    printf("Enter the Numbers:");
    scanf("%d %d",&a,&b);
    int *p=&a;
    int *q=&b;
    printf("Sum=%d",sum(p,q));
}
int sum(int* p, int* q){
    int s=*p+*q;
    return (s);
}