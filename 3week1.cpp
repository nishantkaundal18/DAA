#include<iostream>
using namespace std;
void insertionSort(int arr[],int n,int&comp,int&shift)
{
    int i,j,key;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            shift++;
            j--;
            comp++;
        }
        arr[j+1]=key;
        shift++;
    }
}
int main()
{
    int n,t,comp=0,shift=0;
    cin>>t;
    while(t>0)
    {
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    insertionSort(arr,n,comp,shift);
    for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
            cout<<endl<<"comparison="<<comp<<endl;
            cout<<"shifts="<<shift<<endl;
    t--;
    }
return 0;
}
