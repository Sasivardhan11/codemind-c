#include<stdio.h>
int main()
{
    int n,r,p=1,s=0,a;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    a=p-s;
    printf("%d",a);
}