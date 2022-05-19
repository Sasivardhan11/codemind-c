#include<stdio.h>
int main()
{
    char arr[100];
    fgets(arr,50,stdin);
    printf("%s",arr);
}