#include <iostream>

using namespace std;

int main()
{
    int N,q;
    cin>>N>>q;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    while(q--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        int countt=0;
        for(int i=l-1;i<r;i++)
        {
            if(arr[i]==x)
            {
                countt++;
            }
        }
        cout<<countt<<endl;
    }
}
