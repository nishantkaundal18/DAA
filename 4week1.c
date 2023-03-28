#include <stdio.h>
void merge(int arr[], int l, int m, int r, int *cmp_count, int *inv_count)
{
int i, j, k;
int n1 = m - l + 1;
int n2 = r - m;
int L[n1], R[n2];
for (i = 0; i < n1; i++)
L[i] = arr[l + i];
for (j = 0; j < n2; j++)
R[j] = arr[m + 1 + j];
i = 0;
j = 0;
k = l;
while (i < n1 && j < n2) {
(*cmp_count)++;
if (L[i] <= R[j]) {
arr[k] = L[i];
i++;
}
else {
arr[k] = R[j];
j++;
(*inv_count) += n1 - i;
}
k++;
}
while (i < n1) {
arr[k] = L[i];
i++;
k++;
}
while (j < n2) {
arr[k] = R[j];
j++;
k++;
}
}
void mergeSort(int arr[], int l, int r, int *cmp_count, int *inv_count)
{
if (l < r) {
int m = l + (r - l) / 2;
mergeSort(arr, l, m, cmp_count, inv_count);
mergeSort(arr, m + 1, r, cmp_count, inv_count);
merge(arr, l, m, r, cmp_count, inv_count);
}
}
int main()
{
int t;
printf("Enter no of test cases\n");
scanf("%d", &t);
while (t--) {
int n;
printf("Enter no of inputs in an array\n");
scanf("%d", &n);
int arr[n];
printf("Enter the elements in an array\n");
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);
int cmp_count = 0;
int inv_count = 0;
mergeSort(arr, 0, n - 1, &cmp_count, &inv_count);
printf("Sorted array: ");
for (int i = 0; i < n; i++)
printf("%d ", arr[i]);
printf("\nNumber of comparisons: %d\n", cmp_count);
printf("Number of inversions: %d\n", inv_count);
}
return 0;
}