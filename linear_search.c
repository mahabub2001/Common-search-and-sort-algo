#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("%d %d",i+1,arr[i]);
        }
    }

}
