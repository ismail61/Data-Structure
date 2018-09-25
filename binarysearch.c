#include<stdio.h>//binary search r  time complexity=o(log n)
                   //binary search r space complexity=o(1)

int main()
{
    int low_index,high_index,mid,i;
    int a[10];//n=10;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);//scan 10 element of array...
    }
    low_index=0;
    high_index=9;//high_index=n-1;
    int num;
    printf("enter the number which searching");
    scanf("%d",&num);//searching a number;
    while(low_index<=high_index)//low index jodi high index thake choto or soman hole loop cholbe
    {
        mid=(high_index+low_index)/2;//binary search low;
        if(num==a[mid])
        {
            break;
        }
        if(num<a[mid])
        {
            high_index=mid-1;//numberti mid index thake choto hole high index 1 kom hobe;
        }
        if(num>a[mid])
        {
            low_index=mid+1;//numberti mid index thake boro hole low index 1 besi hobe..
        }

    }
    if(low_index>high_index)//jodi low index high index r cheya boro hoy tahole search hobe na....
    {
        printf("%d is not found",num);
    }
    else
        printf("%d is found\n",a[mid]);
        printf("%d is found\n",num);
        printf("%d th element of array",mid);

    return 0;

}
