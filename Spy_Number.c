#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,r,s=0,p=1;
    scanf("%d",&n);
     d=log10(n);
    while(n>0)
    {
        r=n/pow(10,d);
        s=s+r;
        p=p*r;
        n=n%(int)pow(10,d);
        d--;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}