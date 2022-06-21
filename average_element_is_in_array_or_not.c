#include<stdio.h>
int main()
{
    int n,arr[50],i,sum=0,f=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
        f=1;
        break;
        }
        else
        f=0;
    }
    if(f==1)
    printf("True");
    else
    printf("False");
    return 0;
}