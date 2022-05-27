#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,a,s;
    scanf("%d%d%d",&x,&y,&m);
    a=pow(x,y);
    s=a%m;
    printf("%d",s);
    return 0;
}