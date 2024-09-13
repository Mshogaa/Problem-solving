#include <iostream>

using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    int arr[N][M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>arr[i][j];
        }

    }
    int X;
    bool z=false;
    cin>>X;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(X==arr[i][j])
            {
                z=true;
            }
        }

    }
    if (z==true)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
