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
    printf("Enter the array A:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the array B:");
    for(int i=0;i<N;i++){
        scanf("%d",&b[i]);
    }
    int *p=a;int *q=b;
    for(int i=0;i<N;i++){
        int temp=*p;
        *p=*q;
        *q=temp;
        p++;q++;
    }

    printf("A:");
    for(int i=0;i<N;i++){
        printf("%4d ",a[i]);
    }
    printf("\nB:");
    for(int i=0;i<N;i++){
        printf("%4d ",b[i]);
    }
    return 0;
}