#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,n,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        c=0;
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]>='0' && str[j]<='9')
            {
                c++;
            }
        }
        if(c==strlen(str))
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}