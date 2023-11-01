#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int i=10;
    while(i>=1){
         printf("%dX%d=%d\n",n,i,n*i);
         i--;
    }
}