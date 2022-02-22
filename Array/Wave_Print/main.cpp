#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"Enter rows and columns"<<endl;
    cin>>r>>c;
    int **arr;
    arr = new int*[r];
    cout<<"Enter the elements in the array "<<endl;
    for(int i=0;i<r;i++)
    {
        arr[i]=new int[c];
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    for(int i=0;i<c;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<r;j++)
                cout<<arr[j][i]<<" ";
        }
        else
        {
            for(int j=r-1;j>=0;j--)
                cout<<arr[j][i]<<" ";
        }
    }

    return 0;
}
