#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    float avg,sum=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
    
}