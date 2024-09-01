#include <iostream>

using namespace std;

int main()
{
    int n,countt;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")
        {
            countt+=4;
        }
        else if(s=="Cube")
        {
            countt+=6;
        }
        else if(s=="Octahedron")
        {
            countt+=8;
        }
        else if(s=="Dodecahedron")
        {
            countt+=12;
        }
        else if(s=="Icosahedron")
        {
            countt+=20;
        }
    }
    cout<<countt;
}
