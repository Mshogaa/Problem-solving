#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if(A<=B&&A<=C)
    {
        if(B<=C)
        {
            cout<<A<<" "<<B<<" "<<C;
        }
        else if(C<=B)
        {
            cout<<A<<" "<<C<<" "<<B;
        }
    }
    else if(B<=A&&B<=C)
    {

        if(A<=C)
        {
            cout<<B<<" "<<A<<" "<<C;
        }
        else if(C<=A)
        {
            cout<<B<<" "<<C<<" "<<A;
        }
    }
    else if(C<=A&&C<=B)
    {

        if(A<=B)
        {
            cout<<C<<" "<<A<<" "<<B;
        }
        else if(B<=A)
        {
            cout<<C<<" "<<B<<" "<<A;
        }
    }


}
