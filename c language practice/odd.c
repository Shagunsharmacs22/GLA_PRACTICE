#include<stdio.h>
int main(){
    int i =5;
    while(i<=50){
        if(i%2==0){
            i++;
            continue;
          
        }
        printf("%d\n",i);
        i++;
    }
}