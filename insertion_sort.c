#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int val;

    for(int i=1;i<n;i++)
    {
        val = arr[i];
        j = i-1;

        while(j>=0 && arr[j] > val)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = val;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
