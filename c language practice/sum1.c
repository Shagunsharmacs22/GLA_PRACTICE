#include<stdio.h>
int main(){
    int sum=0;
    int i=5;
    while(i<=50){
        sum=sum+i;
        i++;
    }
    printf("sum is %d",sum);
}