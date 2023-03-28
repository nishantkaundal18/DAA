#include<stdio.h>
int countFrequency(int A[],int n,int k)
{
    int l=0,r=n-1,flag=0,count=0,m;
    while(l<=r)
    {
        m=l+ (r-l)/2;
        if(A[m]==k)
            {
                flag=1;
                break;}

        else if(A[m]<k)
            l=m+1;
        else
            r=m-1;
    }
    if(flag==0)
       return 0;
    else
    {
        while(A[l]!=k)
            l++;
        while(A[r]!=k)
            r--;
    }
    return (r-l+1);

}

int main()
{
   
    int t,n,key,i,loop=1;
    printf("Input no. of test cases: ");
    scanf("%d",&t);
    while(t>0)
    {
        printf("\nInput number of elements of array: ");
        scanf("%d",&n);
        int A[n];
        printf("Input elements: ");
        for(i=0;i<n;i++)
            scanf("%d",&A[i]);
        printf("Input Key: ");
        scanf("%d",&key);
        printf("No. of Copies of this key in array: %d",countFrequency(A,n,key));
       t--;
       } 
}

