/*8. Write a program to find Minimum and Maximum numbers from the given array using Recursion.
ENROLL::-92500527163*/

#include<stdio.h>

void findminmax(int arr[],int n ,int index,int *min,int *max);

void main()
{
    int arr[100],n,i;
    int min,max;

    printf("enter the size of array :");
    scanf("%d",&n);

    printf("enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];

    findminmax(arr,n,1,&min,&max);

    printf("minimum=%d\n",min);
    printf("maximum=%d\n",max);
}
void findminmax(int arr[],int n,int index,int *min,int *max)
{
    if(index==n)
    {
        return;
    }
    if(arr[index]<*min)
    {
        *min=arr[index];
    }

    if(arr[index]>*max)
    {
        *max=arr[index];
    }
    findminmax(arr,n,index+1,min,max);
}
