#include <iostream>

using namespace std;

int main()
{
    int N,sum;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        if(i==0)
        {
            sum==0;
        }
        else if(i==1)
        {
            sum==1;
        }
        else
        {
        sum=arr[i-1]+arr[i-2];
        }
    }
    cout<<sum;
}
