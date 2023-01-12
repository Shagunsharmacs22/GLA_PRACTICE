/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main(){
    int N;
    printf("Enter the Size of Array:");
    scanf("%d",&N);
    int a[N];
    printf("Enter the Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int* p=a;
    printf("So Entered Array is:");
    for(int i=0;i<N;i++){
        printf("%d ",p[i]);
    }
    return 0;
}