#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;
int ans(vector<int>&a,int n,int k)
{
    unordered_map<int,int>m;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int b=k-a[i];
        if(m[b]) ans+=m[b];
        m[a[i]]++;

    }
    return ans;

}
int main()
{
    int n,k;
    cin >>n>>k;
    vector<int>a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<ans(a,n,k);
}