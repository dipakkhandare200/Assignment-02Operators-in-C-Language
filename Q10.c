#include<stdio.h>
int main()
{
    int a;

    printf("enter a number=");
    scanf("%d",&a);
    a=a/10*10;

    printf("\n last value of number is changed=%d",a);
    return 0;

}


