#include<iostream>
#include<vector>
using namespace std;
int maxproduct(vector<int>&a,int n)
{
    int ans=0;
    int prefix=1;
    int suffix=1;
    for(int i=0;i<n;i++)
    {
        if(prefix==0) prefix=1;
        if(suffix=0) suffix=1;
        prefix=prefix*a[i];
        suffix=suffix*a[n-1-i];
        ans=max(ans,max(prefix,suffix));
    }
    return ans;

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
    cout<<maxproduct(a,n);
}
