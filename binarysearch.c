#include<stdio.h>

int main()
{
    int low_index,high_index,mid,i;
    int a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    low_index=0;
    high_index=9;
    int num;
    printf("enter the number which searching");
    scanf("%d",&num);
    while(low_index<=high_index)
    {
        mid=(high_index+low_index)/2;
        if(num==a[mid])
        {
            break;
        }
        if(num<a[mid])
        {
            high_index=mid-1;
        }
        if(num>a[mid])
        {
            low_index=mid+1;
        }

    }
    if(low_index>high_index)
    {
        printf("%d is not found",num);
    }
    else
        printf("%d is found\n",a[mid]);
        printf("%d th element of array",mid);

    return 0;

}
