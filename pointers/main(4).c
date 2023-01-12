/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main(){
    int N;
    printf("Enter the size of Array:");
    scanf("%d",&N);
    int a[N],b[N];
    printf("Enter the Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int *p=a;
    for(int i=0;i<N;i++){
        b[i]=*p;
        p++;
    }
    for(int i=0;i<N;i++){
        printf("%d ",b[i]);
    }
    return 0;
}