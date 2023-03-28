#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int partition(vector<int>& arr, int left, int right, int pivotIndex) {
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
    if (left == right) {
        return arr[left];
    }
    // Choose a random pivot index
    default_random_engine generator;
    uniform_int_distribution<int> distribution(left, right);
    int pivotIndex = distribution(generator);
    // Partition the array
    pivotIndex = partition(arr, left, right, pivotIndex);
    // Recurse on the left or right part of the array
    if (k == pivotIndex) {
        return arr[k];
    } else if (k < pivotIndex) {
        return quickSelect(arr, left, pivotIndex - 1, k);
    } else {
        return quickSelect(arr, pivotIndex + 1, right, k);
    }
}

int main() {
    int t,n, k;
    cin>>t;
    while(t>0)
    {
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    int kthSmallest = quickSelect(arr, 0, n - 1, k - 1);
    int kthLargest = quickSelect(arr, 0, n - 1, n - k);
    cout  << kthSmallest << endl;
    cout <<  kthLargest << endl;
    t--;
    }
    return 0;
}
