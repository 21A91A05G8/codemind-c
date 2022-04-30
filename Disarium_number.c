#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,temp,r,n,c=0;
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        temp=temp/10;
        c++;
    }
    temp=n;
    while(temp)
    {
        r=temp%10;
        sum=sum+pow(r,c);
        temp=temp/10;
        c--;
    }
    if(sum==n)
    printf("True");
    else
    printf("False");
}