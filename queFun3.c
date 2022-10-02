//Write a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0. (TSRS)

#include<stdio.h>

 
 int Num();
 int main() {
    int x,s;
    printf("enter number:");
    scanf("%d",&x);
    
    s=Num(x);
    if(s==1)
    printf("even number");
    else
    printf("odd number");
  // s= Num(x);
   // printf("even number is%d",s);
    
    return 0;

 }  

 int Num(int a) {
    //int c;
    if(a%2==0)
    return 1;
    else
    return 0;

 }