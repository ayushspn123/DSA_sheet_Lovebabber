#include<iostream>
#include<vector>
using namespace std;
void set_matrix(vector<vector<int>>&matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    vector<int>row(n,0);
    vector<int>col(m,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row[i]==1 || col[j]==0){
                matrix[i][j]==0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"/n";
    }
    
}
int main()
{
    int n, m;
    cin >>n>>m;
    vector<vector<int>>matrix;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >>matrix[i][j];
        }
    }
    set_matrix(matrix);
}