#include<iostream>
#include<vector>
#include<map>
using namespace std;
void find_pair(vector<int>&arr,int k)
{
map<int,int>mp;
for (auto x:arr)
mp[x]++;
for (int i=0;i<arr.size();i++)
{
int element=abs(k-arr[i]);
auto it=mp.find(element);
if (it!=mp.end() && element!=k)
{
cout<<arr[i]<<" "<<element<<endl;
return;
}
else if (element==k && mp[element]>=2)
{
cout<<element<<" "<<element<<endl;
return;
}
}
cout<<"NOT found dude!!!"<<endl;
return ;
}
int main()
{
int t;
cout<<"enter the number of test cases";
cin>>t;
while(t--)
{
int n,k;
cout<<"enter the size of the array: ";
cin>>n;
vector<int>arr(n);
cout<<"Enter the elements of the array: ";
for (int i=0;i<n;i++)
cin>>arr[i];
cout<<"Enter the value of Key: ";
cin>>k;
find_pair(arr,k);
}
return 0;
}