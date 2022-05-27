#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i;
    int a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
    a=pow(n,(0.5));
    b=a*a;
    if(b==n)
    printf("True
");
    else
    printf("False
");
    }
    return 0;
}