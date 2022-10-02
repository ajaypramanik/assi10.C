//add two number TNRN type

#include<stdio.h>

void ADD();
int main() {

    ADD();
    return 0;

}

void ADD() {
    int a,b,c;
    printf("enter two number :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("the sum is %d",c);

}