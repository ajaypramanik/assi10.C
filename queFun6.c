//Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>

 
 int Num();
 int main() {
    int x,s;
    printf("enter number:");
    scanf("%d",&x);
    
    s= Num(x);
    printf("factorial is %d",s);
    return 0;

 }  

 int Num(int a) {
    int fact=1,i;
    for(i=1;i<=a;i++)
    { 
        fact=fact*i;
        //printf("sum is :%d",sum)
    }
       return fact;
 }
 