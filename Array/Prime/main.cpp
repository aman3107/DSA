#include <iostream>

using namespace std;

int main()
{
    int n,f=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            f+=1;
    }
    if(f==0)
        cout<<"Prime";
    else
        cout<<"Not Prime";
    return 0;
}
