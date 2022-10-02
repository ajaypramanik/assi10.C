//Write a function to calculate the number of combinations one can make from n items
//and r selected at a time. (TSRS)

#include<stdio.h>

 int fact1(int);
 int fact3(int);
 int fact2(int);
 int main() {
    int n,r,s,p,t,q,u,z;
    printf("enter number:");
    scanf("%d%d",&n,&r);
     t=(n-r);
    p=fact1(n,fact2(r),fact3(t));

    //q=fact2(r);
   // u=fact3(t);

    //s=p/(q*u);
    

    printf("factorial is %d",p);
    return 0;

 }  

 int fact1(int n,int r,int x) {
    int fn=1,comb,i;
    for(i=1;i<=n;i++)
    { 
        fn=fn*i;
        
    }
    int fact2() 
    {
    int fr=1;
     for(i=1;i<=r;i++)
      fr=fr*i;
   
     }
   int fact3() {
   int fx=1;
   for(i=1;i<=x;i++){
   fx=fx*i;
   
      
 }

   }
    comb=fn/(fr*fx);
      return comb ;
 }
   //  }
       // comb=fn/(fr*fx);
    //  return comb ;
// }
     
     

 /*int fact2(int r) {
   int fr=1,i;
   for(i=1;i<=r;i++)
   {
   fr=fr*i;
   }
   return fr;

 }

 int fact3(int x) {
   int fx=1,i;
   for(i=1;i<=x;i++){
   fx=fx*i;
   }
   return fx;
 }
*/