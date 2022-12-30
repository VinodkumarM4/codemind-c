#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=100&&n%2!=0)
    {
        printf("weird");
    }
    else if(n==2<=5&&n%2==0)
    {
        printf("not weird");
    }
    else if(n==6<=20&&n%2==0)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
}