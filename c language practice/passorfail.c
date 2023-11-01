#include<stdio.h>
int main(){
    int marks;
    printf("enter marks of the student:");
    scanf("%d",&marks);
    if (marks>30){
        printf("student is passed");
    }
    else{
        printf("student is fail");
    }    
    return 0;

}

