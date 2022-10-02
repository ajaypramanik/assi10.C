//Write a function to check whether a given number contains a given digit or not.
//(TSRS)

#include<stdio.h>
int Num();
 int main() {
    int a,p,x;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter a digit:");
    scanf("%d",&x);
    //p=Num(a);
    p= Num(a,x);
    if(p==1)
     
    printf("present");
    
     else 
   
     printf("absent");
    
     return 0;

 }  

 int Num(int a,int x) {
   int c,d;
    while(a!=0)
    {
      c=a%10;
      d=c;
      a=a/10;
      // if(d==x)
      // return 1;
      // else
      // return 0;    

    }
    if(d==x)
      return 1;
      else
      return 0;
       //return d;
    }
  
