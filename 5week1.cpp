#include<iostream>
#include<vector>
using namespace std;
void max_char(vector<int>&count)
{
int index=0,el=0;
for (int i=1;i<count.size();i++)
{
if(count[index]<count[i])
{
index=i;
el=count[i];
} 
}
char element='a'+index;
if (count[index]==1)
cout<<"No Duplicates found dude!!!"<<endl;
else
cout<<"Most occuring element is: "<<element<<"-"<<count[index]<<endl;
}
void count_sort(vector<char>&arr)
{
vector<int>count(26,0);//26 size array all are assigned to 0
for (int i=0;i<arr.size();i++)
{
count[arr[i]-'a']++;
}//in this count array will contain the count of the alphabets
//to get the most occuring alaphabet in the CHAR arrray
max_char(count);
//now to get the right index for sorted resulted add the previous count to the current 
one
for (int i=1;i<count.size();i++)
{
count[i]=count[i]+count[i-1];
}
//now to get the resultant sorted alphabets
vector<char>res(arr.size());
for (int i=0;i<arr.size();i++)
{
int index=arr[i]-'a';
res[count[index]-1]='a'+index;
count[index]--;
}
for (int i=0;i<res.size();i++)
cout<<res[i]<<" ";
}
int main()
{
int t;
cout<<"Enter the number of test cases: ";
cin>>t;
while(t--)
{int n;
cout<<"Enter the size of the array: ";
cin>>n;
vector<char>arr(n);
cout<<"Enter the character or alphabets: ";
for (int i=0;i<n;i++)
cin>>arr[i];
count_sort(arr);}
return 0;
}
