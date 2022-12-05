#include<stdio.h>
int main()
{
    float a,b,c,pf,gr;
    scanf("%f%f%f",&a,&b,&c);
    pf=0.12*a;
    gr=a+b+c+pf;
    printf("%0.2f
%0.2f",pf,gr);
}