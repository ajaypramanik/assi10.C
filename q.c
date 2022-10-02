#include<stdio.h>

int main() {

    int n,i,b;
    printf("enter  num");
    scanf("%d%d",&n,&b);

     for(n;n<=b;n++){
     for(i=2;i<=n;i++) 
       
     if(n%i==0)
         break;
         if(i==n)

      printf("%d\t",n);   
     }
    //  if(i==n)

    //  printf("%d",n);     

}