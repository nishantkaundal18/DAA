#include<stdio.h>
int main()
{
    int n,i,j,t,key,count=0;
    printf("Input no. of test cases: ");
    scanf("%d",&t);
    while(t>0)
    {
    printf("Input array limit: ");
    scanf("%d",&n);
    int A[n];
    printf("Input array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("Input key: ");
    scanf("%d",&key);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if(A[i]-A[j]==key || A[j]-A[i]==key)
        count++;
    printf("number of pairs: %d",count);
    t--;
    }
}