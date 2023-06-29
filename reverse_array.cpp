#include <iostream>
#include <vector>
using namespace std;
void rev(vector<int>&a)
{
    int start=0;
    int end=a.size()-1;
    while(start<end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }
}
int main(){
 int n;
 cin >>n;
 int b;
 vector<int>a(n);
 for (int i=0;i<n;i++) {
    cin>>a[i];
 }
   rev(a);


}

