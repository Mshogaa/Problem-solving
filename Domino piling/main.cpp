#include <iostream>

using namespace std;

int main()
{
    int M,N,result=0;
    cin>>M>>N;
    if((N*M)%2==0)
    {
        result=(M*N)/2;
    }
    else{
        result=((M*N)-1)/2;
    }
    cout<<result;
}
