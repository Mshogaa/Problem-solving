#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    int n;
    char letter;
    cin>>n;
    while(n--)
    {
        cin>>letter;
        if(islower(letter))
        {
            cout<<"is lower"<<endl;
        }
        else if(isupper(letter))
        {
            cout<<"is upper"<<endl;
        }
        else
        {
            cout<<"is digit"<<endl;
        }

    }
}
