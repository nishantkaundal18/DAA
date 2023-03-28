#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int partition(vector<int>& arr, int left, int right) {
int pivotIndex = rand() % (right - left + 1) + left;
int pivotValue = arr[pivotIndex];
swap(arr[pivotIndex], arr[right]);
int storeIndex = left;
for (int i = left; i < right; i++) {
if (arr[i] < pivotValue) {
swap(arr[i], arr[storeIndex]);
storeIndex++;
}
}
swap(arr[storeIndex], arr[right]);
return storeIndex;
}
int quickSelect(vector<int>& arr, int left, int right, int k) {
while (true) {
int pivotIndex = partition(arr, left, right);
if (k == pivotIndex) return arr[k];
else if (k < pivotIndex) right = pivotIndex - 1;
else left = pivotIndex + 1;
}
}
int main() {
int n,t;
cout<<"Enter total number of test cases"<<endl;
cin>>t;
for(int i=0;i<t;i++)
{
cout<<"Enter no of element"<<endl;
cin >> n;
cout<<"Enter the elements of array"<<endl;
vector<int> arr(n);
for (int i = 0; i < n; i++) cin >> arr[i];
int k;
cin >> k;
int kthSmallest = quickSelect(arr, 0, n - 1, k - 1);
cout << "The kth smallest element is " << kthSmallest << endl;
}
return 0;
}