#include<stdio.h> int main()
{
int T;
int n,i,j,key,c=0; scanf("%d",&T); while(T>0)
{
scanf("%d/n",&n); int arr[n]; for(i=0;i<n;i++)
{
scanf("%d ",&arr[i]);
}
scanf("%d",&key); for(j=0;j<n;j++)
{
if(arr[j]==key)
{
c=1;
printf("Present %d",(j+1)); break;
}
}
if(c==0)
printf("Not Present %d",j); T--;
c=0;
}
}

