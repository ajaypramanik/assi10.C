 //   TSRS TYPE

 #include<stdio.h>

 
 int ADD(int,int);
 int main() {
    int x,y,s;
    printf("enter two number:");
    scanf("%d%d",&x,&y);
    s=ADD(x,y);
    printf("sum is: %d",s);
    return 0;

 }  

 int ADD(int a,int b) {
    int c;
    c=a+b;
    return c;
 }