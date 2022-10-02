//     TSRN TYPR

#include<stdio.h>

void Add();
int main() {
    int x,y;
    printf("enter two numbers :");
    scanf("%d%d",&x,&y);
    Add(x,y);
    return 0;
}

void Add(int a,int b) {
    int c;
    c=a+b;
    printf("sum is :> %d ",c);

}