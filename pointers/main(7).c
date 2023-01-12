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
    int a[N];
    printf("Enter the Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int *p=a;
    int ele;
    printf("Search for element:");
    scanf("%d",&ele);
    int k=0;
    for(int i=0;i<N;i++){
        if(ele==*p){
            k=i;
            break;
        }
        p++;
    }
    printf("Element is on the index:%d",k);
    return 0;
}