#include<stdio.h>

void main()
{
    int ar[100],n;
    printf("enter the size of array");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("ente the element");
        scanf("%d",&ar[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ar[i]);
    }
    
}