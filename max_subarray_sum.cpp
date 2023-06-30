#include<iostream>
using namespace std;
int sum(int a[], int n)
{
  int maxi=0;
  int cur_sum=0;
  for(int i=0;i<n;i++)
  {
    cur_sum+=a[i];
    maxi=max(maxi,cur_sum);
    if(maxi<0) cur_sum=0;
    
    
  } 
  return maxi; 
}
int main()
{
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++) cin >>a[i];
    cout<<sum(a,n);
    return 0;
}