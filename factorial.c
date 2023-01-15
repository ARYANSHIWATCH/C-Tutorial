#include<stdio.h>
void main()
{
    int x,y,fact=1;
    printf("Enter a number\n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);

}