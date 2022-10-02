//10. Write a function to print all prime factors of a given number. For example, if the
//number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include<stdio.h>
void num1();
 void Num();
 int main() {
    int a,p;
    printf("enter a number:");
    scanf("%d",&a);
   
   Num(a);
   num1(p);
    return 0;
    }  

   void Num(int a) {
   int i,k;
   for(i=2;i<=a/2;i++)
   {
      if(a%i==0) {
         
      
      k=i;
     // return k;
      
    
   

     printf("%d\t",k);
      }
     
      // break;
      }
   }
   
   
   
//  }
     
//  }
//   void num1(int p) {
//    int i;
//     for(i=2;i<=p-1;i++) {
//       if(p%i==0)
//         break;
//         if(i==p)
//         printf("%d",p);


//     }

//   }