#include<iostream>
#include<vector>
using namespace std;
void merge_procedure(vector<int>&left,vector<int>&right)
{
vector<int>res;
int i=0,j=0;
while(i<left.size() &&j<right.size())
{
if (left[i]==right[j])
{res.push_back(left[i]);
i++;
j++;
}
else if(left[i]<right[j])
i++;
else
j++;
}
for (i=0;i<res.size();i++)
cout<<res[i]<<" ";
cout<<endl;
return;
}
int main()
{
int t;
cout<<"enter the number of test cases";
cin>>t;
while(t--)
{
int n,m;
cout<<"enter the size of the array: ";
cin>>n;
vector<int>arr(n);
cout<<"Enter the elements of the array: ";
for (int i=0;i<n;i++)
cin>>arr[i];
cout<<"Enter the size of the second array: ";
cin>>m;
vector<int>arr2(m);
cout<<"Enter the element of the array: ";
for (int i=0;i<m;i++)
cin>>arr2[i];
merge_procedure(arr,arr2);
}
return 0;
}