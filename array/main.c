/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
//Frequency of Array
int main(){
    int N,f[1000]={0};
    printf("Enter the size of Array:");
    scanf("%d",&N);
    int a[N];
    printf("Enter the Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int max=0;
    for(int i=0;i<N;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<max+1;j++){
            if(a[i]==j){
                f[j]++;
                break;
            }
        }
    }
    for(int j=0;j<max+1;j++){
        if(f[j]!=0){
            printf("%d - %d\n",j,f[j]);
        }
        
    }
    return 0;
}