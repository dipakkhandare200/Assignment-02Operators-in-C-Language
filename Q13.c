#include<stdio.h>
int main()
{
    int num;

    printf("enter a three digit number=");
    scanf("%d",&num);
    num=num%10*100+num/10;

    printf("\n reverse number  =%d ",num);
    return 0;

}




