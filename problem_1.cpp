//problem  : find the maximum element from the entered matrix .
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"enter the no of the rows : ";
    cin>>m;
    cout<<"enter the no of the colums  : ";
    cin>>n;

    int matrix[m][n];

    //taking the element in the 2 d array using a for loop .

    cout<<endl<<"enter the element of the matrix : "<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<endl<<"your entered matrix is : "<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int max = matrix[0][0];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]>max)
            {
                max = matrix[i][j];
            }
        }
    }


    int ask;
    cout<<endl<<"for maximum element of the matrix press 1 : ";
    cin>>ask;

    if(ask == 1)
    {
        cout<<endl<<"the maximum element of the matrix is : "<<(max)<<endl;
    }

    return 0;
}