#include <iostream>
using namespace std;

int main(){
    int N,b;
    cin>>N;
    while(N!=0)
    {
        int dig=N%10;
        N/=10;
        if(dig==7)
        {
           b=1;
           break;
        }
        else{
            b=-1;
        }

    }
    if(b==1)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}
