#include <iostream>

using namespace std;

int main()
{
    long long N,a,b;
    long long summ=0;
    cin>>N>>a>>b;
    while(N--){
        long long X;
        cin>>X;
        if(X>=a&&X<=b){
         summ+=X;
        }
    }
    cout<<summ;

}
