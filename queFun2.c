//2. Write a function to calculate simple interest. (TSRS)



#include<stdio.h>

float SI(float,float,float);
int main() {
    float p,r,t,intrest;
    //int b;
    printf("enter priciple,rate,time ");
    scanf("%f%f%f",&p,&r,&t);
    intrest=SI(p,r,t);
    printf("si is :%f",intrest);
    return 0;

}

float SI(float x,float y,float z) {
    float k;
    k= (x*y*z)/100;
    return k;
}