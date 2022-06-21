#include<stdio.h>
int main()
{
    int n,arr[50],i,a,f=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&a);
    for(i=1;i<=n;i++)
    {
        if(a==arr[i])
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