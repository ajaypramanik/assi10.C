// TNRS TYPE

#include<stdio.h>
int ADD();
int main(){
    int s;
    s=ADD();
    printf("sum is :%d",s);
    //ADD();
     s=ADD();
    printf("sum is :%d\n",s);

     s=ADD();
    printf("sum is :%d\n",s);
     s=ADD();
    printf("sum is :%d",s);
 return 0;


}

int ADD(){
    int a,b,c;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}