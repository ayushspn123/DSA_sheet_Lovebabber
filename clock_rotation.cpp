#include<iostream>
#include <vector>

using namespace std;
void rot(vector<int>&a,int n)
{
int ans=a[n-1];
for(int i=n-1;i>0;i--) 
{
    a[i]=a[i-1];
}
a[0]=ans;
for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int main()
{
    int n;
    cin >>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    rot(a,n);
    return 0;
}