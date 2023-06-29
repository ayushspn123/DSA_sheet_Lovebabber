#include<iostream>
using namespace std;
 void sort012(int arr[], int n)
    {
       int high=n;
       int low=0,mid=0;
       while(mid<=high)
       {
           switch(arr[mid])
           {
               case 0: swap(arr[mid++],arr[low++]);
               break;
               case 1:
               mid++;
               break;
               case 2:
               swap(arr[mid],arr[high--]);
               break;
           }
       }
       for(int i=0;i<n;i++)
       {
        cout<<arr[i];
       }
       
        // code here 
    }
    int main()
    {
        int n;
        cin>>n;
        int a[100000];
        for(int i=0;i<n;i++) cin>>a[i];
        sort012(a,n);
    }