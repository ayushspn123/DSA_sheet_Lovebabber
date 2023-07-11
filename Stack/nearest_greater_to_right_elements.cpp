#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
void check(vector<int> &a, int n)
{
    vector<int> ans;
    stack<int> sa;
    
       
    
    for (int i = n - 1; i >= 0; i--)
    {
        if (sa.size() == 0)
            ans.push_back(-1);
        else if (sa.size() > 0 && sa.top() > a[i])
            ans.push_back(sa.top());
        else if (sa.size() > 0 && sa.top() < a[i])
        {
            while (sa.size() > 0 && sa.top() <= a[i])
            {
                sa.pop();
            }
            if (sa.size() == 0)
                ans.push_back(-1);
            else
                ans.push_back(sa.top());

        }
         sa.push(a[i]);
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    check(a, n);
}