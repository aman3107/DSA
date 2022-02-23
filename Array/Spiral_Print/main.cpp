#include <iostream>

using namespace std;
void Spiral_Print(int **arr,int r, int c)
{
    int sr=0,sc=0,er=r-1,ec=c-1;
    while(sc<=ec and sr<=er)
    {
        for(int i=sc;i<=ec;i++){
            cout<<arr[sr][i]<<" ";
        }

        sr++;

        for(int i=sr;i<=er;i++){
            cout<<arr[i][ec]<<" ";
        }

        ec--;

        if(sr<er){
            for(int i=ec;i>=sc;i--){
                cout<<arr[er][i]<<" ";
            }
        }

        er--;
        if(sc<ec){
            for(int i=er;i>=sr;i--){
                cout<<arr[i][sc]<<" ";
            }
        }

        sc++;
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
    Spiral_Print(arr,r,c);
    return 0;
}
