#include<stdio.h>
int main()
{
    int a[10]={4,6,2,5,9,3,8,7,1,0};
    int n=10,i,x;
    scanf("%d",&x);
    for(i=0;i<10;i++)
    {
        if(a[i]==x)
            break;

    }
    if(a[i]!=x)
        printf("%d is not found",x);
    else
        printf("%d is found",x);
}
