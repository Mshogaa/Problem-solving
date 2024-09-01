#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[N];
    }
    int Q;
    cin>>Q;
    while(Q--)
    {
        int L,R;
        cin>>L>>R;
        int countt=0;
        for(int L;L<R;L++)
        {
            countt+=arr[L];
        }
        cout<<countt<<endl;

    }
}
