#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rearrange(vector<int>&a,int n)
{
// sort(a.begin(),a.end()); take n*log(n) time complexity
int start=0;
int end=n-1;
while(start<=end)
{
    if(a[start]<0 && a[end]<0) start++;
    else if(a[start]>0 && a[end]<0){
        int temp=a[start];
         a[start]=a[end];
        a[end]=temp;
        start++;
        end--;


    }
    else if(a[start]>0 && a[end]>0)end--;
    else {
        start++;
        end--;
    }
    
}
for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int main()
{
    int n;
    cin >>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    rearrange(a,n);
 return 0;
}