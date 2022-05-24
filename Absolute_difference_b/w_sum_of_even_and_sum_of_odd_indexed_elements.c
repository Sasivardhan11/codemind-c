#include<stdio.h>
int main()
{
    int n,arr[100],s=0,sum=0,i,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+arr[i];
        }
        if(i%2==1)
        {
            s=s+arr[i];
        }
    }
    d=(sum>s)?(sum-s):(s-sum);
    printf("%d",d);
}