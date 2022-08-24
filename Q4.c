#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values of a & b =");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n value of a=%d & b=%d",a,b);
    return 0;

}


