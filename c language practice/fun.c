#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("enter the number :\n");
    scanf("%d",&n);
    printf("the square of the number is %f",pow(n,2));//because power give return value od double type so %d canot be used as is it used for only integers 

}