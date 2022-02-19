#include<stdio.h>
int main()
{
    int x,y,ans;
    scanf("%d%d",&x,&y);
    ans=x*1+y*2;
    if(x==0 && y%2!=0)
    printf("NO");
    else if(ans%2==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}