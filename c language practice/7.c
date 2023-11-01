#include<stdio.h>
int main(){
    int i =1,n;
    while(i>0){
        printf("enter the number:");
        scanf("%d",&n);
        if(n%7==0){
            break;
        }
    }
}