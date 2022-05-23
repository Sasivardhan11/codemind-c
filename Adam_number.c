#include<stdio.h>
int main()
{
    int n,a,r,g,b,s=0,sum=0;
    scanf("%d",&n);
    a=n*n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    b=s*s;
    while(b>0)
    {
        g=b%10;
        sum=sum*10+g;
        b=b/10;
    }
    if(a==sum)
    printf("True");
    else
    printf("False");
}