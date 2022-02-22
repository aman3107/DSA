#include <iostream>

using namespace std;

int main()
{
    int **arr;
    int m,n;
    cout<<"Enter the row and column of array "<<endl;
    cin>>m>>n;
    arr = new int*[m];
    cout<<"Enter the elements in the array "<<endl;
    int v=1;
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=v;
            v++;
        }

    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
