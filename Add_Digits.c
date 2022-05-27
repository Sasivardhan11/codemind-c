#include<stdio.h>
int main()
{
    int n,r1,r2,r3,s1=0,s2=0,s3=0;
    scanf("%d",&n);
    while(n>0)
    {
        r1=n%10;
        s1=s1+r1;
        n=n/10;
    }
    while(s1>0)
    {
        r2=s1%10;
        s2=s2+r2;
        s1=s1/10;
    }
    while(s2>0)
    {
        r3=s2%10;
        s3=s3+r3;
        s2=s2/10;
    }
    printf("%d",s3);
    return 0;
}