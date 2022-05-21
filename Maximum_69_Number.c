  #include<stdio.h>
#include<math.h>
int main()
{
int n,d,r,f=0,s=0;
scanf("%d",&n);
d=log10(n);
while(n>0)
{          
r=n/pow(10,d);
if(r==6&&f==0)
{
            s=s*10+9;
            f=f+1;
        }
        else
        {
        s=s*10+r;
        }
        n=n%(int)pow(10,d);
        d--;
    }
    printf("%d",s);
return 0;
}