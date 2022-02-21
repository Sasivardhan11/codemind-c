#include<stdio.h>
int main()
{
    int l,b,w,c,area,narea,nl,nb,tarea,cost;
    scanf ("%d%d%d%d",&l,&b,&w,&c);
    area=l*b;
    nl=l+(2*w);
    nb=b+(2*w);
    narea=nl*nb;
    tarea=narea-area;
    cost=c*tarea;
    printf("%d",cost);
}