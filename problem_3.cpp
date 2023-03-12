#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int m;
    cout<<"enteer the number of the rows : ";
    cin>>m;
    int n;
    cout<<"enter the number of the colums : ";
    cin>>n;

    int mat[m][n];

    cout<<endl<<"enter the element of the matrix  : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
    {
        cin>>mat[i][j];
    }
    }

    vector<int> rows;
    vector<int> colums;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==0)
            {
                rows.push_back(i);
                colums.push_back(j);
            }
        }
    }

    for(int i=0;i<rows.size();i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[rows[i]][j] = 0;
        }
    }


    for(int i=0;i<m;i++)
    {
        for(int j=0;j<colums.size();j++)
        {
            mat[i][colums[j]] = 0;
        }
    }
    
    cout<<"the final answer is : "<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)

        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}


