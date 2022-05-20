#include<stdio.h>
int main()
{
    int t,n,i,temp,s,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d
",&n);
        temp=n;
        s=0;
        while(n>0)
        {
           r=n%10;
           s=s*10+r;
           n=n/10;
        }
        if(temp==s)
        printf("True
");
        else
        printf("False
");
    }
}