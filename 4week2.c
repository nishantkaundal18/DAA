#include <stdio.h>
void swap(int* a, int* b,int *s) {
int t = *a;
*a = *b;
*b = t;
(*s)++;
}
int partition(int arr[], int low, int high, int *s,int *c)
{
int i = low - 1;
int pivot = arr[high];
for (int j = low; j < high; j++) {
if (arr[j] <= pivot) {
i++;
swap(&arr[i], &arr[j],s);
}
(*c)++;
}
swap(&arr[i + 1], &arr[high],s);
return i + 1;
}
void quickSort(int arr[], int low, int high, int *s, int* c) {
if (low < high) {
int pi = partition(arr, low, high, s, c);
quickSort(arr, low, pi - 1,s,c);
quickSort(arr, pi + 1, high,s,c);
}
}
int main()
{
int x,co,s,c,i,j,k,n;
printf("Enter total no. of test cases: ");
scanf("%d",&c);
for(j=1;j<=c;j++)
{
printf("Enter the size of array: ");
scanf("%d",&n);
int a[n];
printf("Enter the no. in array: ");
for(k=0;k<n;k++)
{
scanf("%d",&a[k]);
}
co=0;
s=0;
quickSort(a, 0, n - 1,&s,&co);
printf("Sorted array: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
printf("Comparisons: %d\n",co);
printf("Swaps: %d\n",s);
}
return 0;
}
