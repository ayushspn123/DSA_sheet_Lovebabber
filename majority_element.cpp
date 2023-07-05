#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int major(vector<int>&a,int n,int k)
{
    unordered_map<int,int>map;
    for(int i=0;i<n;i++)
{
    map[a[i]]++;

}
for(auto i:map)
{
    if(i.second>=n/k) return i.first;
}
return -1;
}
int main()
{
    int n;
    int k;
    cin >>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<major(a,n,k);
}