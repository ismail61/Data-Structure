#include<bits/stdc++.h>
using namespace std;
void merge_main(int str[],int left,int mid,int right)
{
    int size_left,size_right;
    size_left=mid-left+1;
    size_right=right-mid;
    int L[size_left],R[size_right];
    for(int i=0;i<size_left;i++)
    {
        L[i]=str[left+i];
    }
    for(int i=0;i<size_left;i++)
    {
        R[i]=str[mid+1+i];
    }
    int i=0,j=0,k;
    for(k=left;i<size_left && j<size_right ;k++)
    {
            if(L[i]<R[j])
            {
                str[k]=L[i];
                i++;

            }
            else
            {
                str[k]=R[j];
                j++;
            }
    }
    while(i<size_left)
    {
        str[k]=L[i];
        i++;
        k++;
    }
    while(j<size_right)
    {
        str[k]=R[j];
        j++;
        k++;
    }

}
void merge_sort(int str[],int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int mid=left+(right-left)/2;
    merge_sort(str,left,mid);
    merge_sort(str,mid+1,right);
    merge_main(str,left,mid,right);
}
int main()
{
    int str[] = {20, 87, 99, 9, 14, 1};
	int n = sizeof(str)/sizeof(str[0]);
    merge_sort(str,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<endl;
    }
}
