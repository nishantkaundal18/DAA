#include<stdio.h>
int main()
{
    int t,n,i,j,k,flag=0;
    printf("Input no. of test cases: ");
    scanf("%d",&t);
    while(t>0)
    {
        printf("Input array limit: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
        for(k=j;k<n;k++)
        if(arr[i]+arr[j]==arr[k] && i!=j && i!=k && j!=k)
    {
        flag=1;
        printf("\n[%d,%d,%d]",i,j,k);
        break;
    }
    if(flag==0)
        printf("No such indices found.");
        t--;
}
}