/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
//Deleting an element
int main(){
    int N;
    printf("Enter the size of Array:");
    scanf("%d",&N);
    int a[N];
    printf("Enter the Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int ele;
    printf("Enter the Element to be deleted:");
    scanf("%d",&ele);
    int pos;
    for(int i=0;i<N;i++){
        if(ele==a[i]){
            pos=i;
            break;
        }   
    }
    for(int i=pos;i<N-1;i++){
        a[i]=a[i+1];
    }
    printf("New Array:");
    for(int i=0;i<N-1;i++){
        printf("%d ",a[i]);
    }
    return 0;
}