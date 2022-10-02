//Write a function to calculate the number of arrangements one can make from n items
//and r selected at a time. (TSRS)


#include<stdio.h>

 int fact();
 int arra();
 
 int main() {
    int n,r;
    printf("enter number:");
    scanf("%d%d",&n,&r);
    

    printf("combination is %d",arra(n,r));
    return 0;

 }  

 int fact(int n) {
    int fact=1,i;
    for(i=1;i<=n;i++)
    
    fact=fact*i;
       return fact;
 }

 int arra(int n,int r) {
      return fact(n)/fact(r) ;
 }
   

