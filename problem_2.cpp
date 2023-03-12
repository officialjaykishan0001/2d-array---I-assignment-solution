#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n  : ";
    cin>>n;

    int a[n][n];
cout<<endl<<"enter the element of the matrix : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }


    cout<<endl<<"the entered matrix Is : "<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int transpose[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)

        {
            transpose[i][j] = a[j][i];
        }
    }


    cout<<endl<<"the  rotated matrix is : "<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=(n-1);j>=0;j--)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}
