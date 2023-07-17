#include<iostream>
#include<stack>
using namespace std;
string reverse(string s)
{
    stack<char>sta;
    string rev="";
    for(int i=0;i<s.length();i++)
    {
        sta.push(s[i]);
 }
 while(!sta.empty())
 {
    rev+=sta.top();
    sta.pop();
 }
return rev;
}
int main()
{
    string s;
    cin >>s;
   cout<< reverse(s);
}