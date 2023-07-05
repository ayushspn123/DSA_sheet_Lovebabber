#include<iostream>
#include<vector>
#include <queue>
using namespace std;
int kth(vector<vector<int> >&a,int n ,int m ,int k)
{
    priority_queue<int>maxh;
    for(int i=0;i<n;i++)

    {
        for(int j=0;j<m;j++){
        maxh.push(a[i][j]);
        if(maxh.size()>k) maxh.pop();
        }
    }
    return maxh.top();



}
int main()
{
    int n ,m;
    cin >>n>>m;
    int k;
    cin >>k;
    vector<vector<int>>a(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];

        }
    }
    cout<<kth(a,n,m,k);
}
