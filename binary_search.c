#include<stdio.h>
int main()
{
    int n,mid,left,right,x;
    scanf("%d",&n);
    scanf("%d",&x);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    left=0;
    right=n-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid] == x)
        {
            printf("%d %d",x,mid+1);
        }
        if(arr[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
}
