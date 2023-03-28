#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n,int&comp,int&swap)
{
    int i,j,min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
            {
                 comp++;
                if(arr[j]<arr[min])
                {    
                    min=j;
                }
               
            }
            swap++;
        if(min!=i)
        {
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
}
int main()
{
    int n,t,comp=0,swap=0;
    cin>>t;
    while(t>0)
    {
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    SelectionSort(arr,n,comp,swap);
    for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
            cout<<endl<<"comparisons="<<comp<<endl;
            cout<<"swaps="<<swap<<endl;
    t--;
    }
return 0;
}

