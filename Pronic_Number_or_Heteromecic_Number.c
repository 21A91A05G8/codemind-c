#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*(i+1)==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}