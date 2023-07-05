#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool check(vector<int>&a,int n)
{
    unordered_set<int>set;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==0 || set.find(sum) !=set.end()); return true;
        set.insert(sum);

    }
    return false;
}
int main()
{
    int n;
    cin >>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<check(a,n);
}