#include<iostream>
#include<set>
using namespace std;
int dounion(int a[],int b[],int n,int m)
{
 set<int> s;

        for(int i=0;i<n;i++){
        s.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            s.insert(b[i]);
        }
    
       return s.size();
    
}
int main()
{
    int n,m;
    cin >>n;
    cin >>m;
    int a[100000];
    int b[100000];
    for(int i=0;i<n;i++) cin >>a[i];
    for(int i=0;i<m;i++) cin >>b[i];
    cout<<dounion(a,b,n,m);
    return 0;
}