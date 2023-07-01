#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int height1(vector<int>&a,int n,int k)
{
    sort(a.begin(),a.end());
    int maxi=a[n-1];
    int mini=a[0];
    int result=maxi-mini;
    for(int i=1;i<n;i++)
    {
        maxi=max(a[n-1]-k,a[i-1]+k);
        mini=min(a[0]+k,a[i]-k);
        result=min(result,maxi-mini);


    }
    return result;



}
int main()
{
    int n;
    cin >>n;
    int k;
    cin >>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
   cout<< height1(a,n,k);
}