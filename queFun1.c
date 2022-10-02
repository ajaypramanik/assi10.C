//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>

float Area(float);
int main() {
    float a,b;
    //int b;
    printf("enter radious ");
    scanf("%f",&b);
    a=Area(b);
    printf("area is :%f",a);
    return 0;

}

float Area(float r) {
    float x;
    x= 3.14*r*r;
    return x;
}