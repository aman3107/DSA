#include <iostream>

using namespace std;

void Rotate_Image(int **arr, int r, int c)
{
    for(int i=r-1;i>=0;i--)
    {
        for(int j=0;j<c;j++)
            cout<<arr[j][i]<<" ";
        cout<<endl;
    }
}
int main()
{
    int r,c;
    cout<<"Enter the rows and columns "<<endl;
    cin>>r>>c;
    int **arr;
    arr = new int*[r];
    cout<<"Enter the elements in the array "<<endl;
    for(int i=0;i<r;i++)
    {
        arr[i] = new int[c];
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    }
    cout<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    Rotate_Image(arr,r,c);
    return 0;
}

