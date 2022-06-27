#include<stdio.h>
int main()
{
    int a=0,b=1,c=a+b,n;
    scanf("%d",&n);
    while(c<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}