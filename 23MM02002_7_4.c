#include<stdio.h>

int max(int a, int b){
    if(a>b)
    return a;
    else 
    return b;
}

int largest(int arr[], int n)
{
    if(n==1)
    return arr[0];
    else
    return max(arr[n-1],largest(arr,n-1));
}

int main()
{
    int n;

    printf("\nEnter the value of n");
    scanf("%d",&n);

    int arr[n];
    int i=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int max=0;
    max=largest(arr,n);
    printf("\n The largest element in the given array :%d",max);
    return 0;
}