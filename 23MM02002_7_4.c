#include<stdio.h>
int largest(int arr1[],int start,int end,int max)
{
    int i=0;
    if(start<=end)
    {
        int temp= (arr1[start]>=arr1[end])?arr1[start]:arr1[end];
        
        if(temp>=max)
        max=temp;

        i++;

        largest(arr1,start+i,end-i,max);
    }
    else
    return max;
}

int main()
{
    int n;

    printf("\nEnter the value of n: ");
    scanf("%d",&n);

    int arr[n];
    int i=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int m=0;
    int m1 =largest(arr,0,n-1,m);


    printf("\n The largest element in the given array :%d",m1);
    return 0;
}