#include<stdio.h>
int main()
{
    int s=0,sum=0,n,m,i;
    scanf("%d
%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            sum=sum+i;
        }
    }
    if((s==m)&&(sum==n))
    printf("Amicable");
    else
    printf("Not Amicable");
    return 0;
}