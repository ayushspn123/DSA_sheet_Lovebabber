#include<iostream>
#include<vector>
using namespace std;
int find(vector<int>&a,int n)
{
    vector<int>ans(n,0);
    for(int i=0;i<n;i++)
    {
        ans[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(ans[i]>=2) return i;
    }
    return -1;


}
int main()
{
    int n;
    cin >>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    cout<<find(a,n);
}