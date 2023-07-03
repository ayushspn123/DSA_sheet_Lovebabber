#include<iostream>
#include<vector>
using namespace std;
int pro(vector<int>&a,int n)
{
    int profit=0;
    int buy=a[0];
    for(int  i=1;i<n;i++)
    {
        if(buy>a[i]) buy=a[i];
        if(a[i]-buy>profit) profit=a[i]-buy;
    }
    return profit;


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
 cout<<pro(a,n);
}

