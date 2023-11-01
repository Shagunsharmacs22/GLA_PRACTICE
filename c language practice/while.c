#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int   i=0;
    while(i<(n+1)){
        printf("%d\n",i);
        i++;
    }
    return 0;
}