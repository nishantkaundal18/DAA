#include<stdio.h>
#include<math.h>
int main()
{
int n,m,i=0,j,k,l=0,u=0,flag=0;
printf("Please input array limit: ");
scanf("%d",&n);

int a[n];
printf("please input array elements:\n");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);

printf("Please input the key to check: ");
scanf("%d",&k);

m=(int)sqrt(n);

while(l<=n)
{
    if(a[l]<k)
        l=l+m;
    else
    {
        u=l;
        l=l-m;
        break;
    }
    //i=i+m;
}

for(i=l;i<=u;i++)
{
    if(a[i]==k)
    {
        printf("Key found");
        flag=1;
        break;
    }
}
if(flag==0)
    printf("Key not found.");
}