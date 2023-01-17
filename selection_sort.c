#include<stdio.h>
int main()
{
    int n,temp,index_min;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        index_min = i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index_min])
            {
                index_min = j;
            }
        }
        if(index_min != i)
        {
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
