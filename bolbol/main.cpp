#include <iostream>
using namespace std;
int main()
{
    int a[3],b[3];
    int acount=0,bcount=0;
    for(int i=0;i<=2;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=2;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<=2;++i)
    {
        if(a[i]>b[i])
        {
            acount++;
        }
         if(a[i]<b[i])
        {
            bcount++;
        }
    }
    cout<<acount<<" "<<bcount;
}
