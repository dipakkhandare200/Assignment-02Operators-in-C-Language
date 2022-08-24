#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter values of a & b =");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;

    printf("\n value of a=%d & b=%d",a,b);
    return 0;

}

