#include<stdio.h>
 int main()
 {
 int comp=0;
 int n,i,key,mid,l;
 scanf("%d",&l);
 while(l)
 {
 scanf("%d",&n);
 int first=0,last=n-1;
 int arr[n];
 for(i=0;i<n;i++){
 scanf("%d",&arr[i]);
 }
 scanf("%d",&key);
 mid=(first+last)/2;
 while(first<=last )
 {
 if(arr[mid]<key)
 {
 first=mid+1;
 comp++;
 }
 else if(arr[mid]==key)
 {
 comp++;
 printf("Present %d\n",comp);
 break;
 }
 else
 {
 last=mid-1;
 }
 mid=(first+last)/2;
 }
 if(first>last)
 {
 comp++;
 printf("Not present %d\n",comp);
 }
 l--;
 }
}
