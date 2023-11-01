#include<stdio.h>
float area(float r);
int main(){
    float radius;
     printf("enter the radius of the circle\n");
     scanf("%f",&radius);
     float  a =area(radius);
     printf("the area of the circle is %f",a);
    return 0;
}
float area(float r){
     float c= 3.14*r*r;
     return c;
}