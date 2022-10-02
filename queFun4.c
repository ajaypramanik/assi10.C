//Write a function to print first N natural numbers (TSRN)


#include<stdio.h>

 
 void Num();
 int main() {
    int x;
    printf("enter number:");
    scanf("%d",&x);
    
     Num(x);
    return 0;

 }  

 void Num(int a) {
    int sum=0,i;
    for(i=1;i<=a;i++)
    {
        sum=sum+i;
        //printf("sum is :%d",sum)
    }
    printf("sum is %d",sum);
   

 }