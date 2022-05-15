#include<stdio.h>
int main()
{
    int i,sum=0;
    char str[100]="abc45def5ghi32";
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if((str[i]>='0') && (str[i]<='9'))
        {
            sum=sum+(str[i]-'0');
        }
    }
    printf("%d",sum);
}