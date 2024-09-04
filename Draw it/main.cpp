#include <iostream>

using namespace std;

int main()
{
    char S;
    cin>>S;
    int N,X;
    cin>>N;
    while(N--)
    {
        cin>>X;
        for(int i=1;i<=X;i++)
        {
            cout<<S;
        }
        cout<<endl;
    }
}
