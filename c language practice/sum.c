#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    int i=n;
    while(i>=1){
        sum=sum+i;
        printf("%d\n",i);
        i--;
    }
    printf("sum is %d",sum);
}