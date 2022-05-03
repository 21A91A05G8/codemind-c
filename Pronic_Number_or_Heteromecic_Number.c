#include<stdio.h>
int main()
{
    int pro,i,flag=0;
    scanf("%d",&pro);
    flag=0;
    for(i=1;i<=pro;i++)
    {
        if(i*(i+1)==pro)
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