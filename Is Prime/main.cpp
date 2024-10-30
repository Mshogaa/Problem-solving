#include <iostream>

using namespace std;

int main()
{
    int X;
    cin>>X;
    if(X!=1&&(X%X==0)&&(X/X==1)&&X%2!=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
