#include <queue>
#include <iostream>
using namespace std;
int kth(vector<int>&a,int n,int k)
{
 priority_queue<int>max;
 for(int i=0;i<n;i++)
 {
    max.push(a[i]);
    if(max.size()>k) max.pop();


 }
 return max.top();
}
int main()
{
    int n;
    cin >>n;
 vector<int>a(n);
    int k;
    cin >>k;
    for(int i=0;i<n;i++) cin >>a[i];
    cout<<kth(a,n,k);
}