#include<stdio.h>
int main()
{
    int n;
    float sum=0,temp,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=1/i;
        sum=sum+temp;
    }
    printf("%.2f",sum);
}