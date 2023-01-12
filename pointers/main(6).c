/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void rev(int N,int* p){
    for(int i=0;i<N/2;i++){
        int temp=p[i];
        p[i]=p[N-1-i];
        p[N-1-i]=temp;
    }
}
int main(){
    int N;
    printf("Enter the size of Array:");
    scanf("%d",&N);
    int a[N];
    printf("Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int* p=a;
    rev(N,p);
    printf("Reveresed Array:");
    for(int i=0;i<N;i++){
        printf("%d ",a[i]);
    }
}