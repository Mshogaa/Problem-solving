#include <iostream>

using namespace std;

int main()
{
   int a,b;
   cin>>a>>b;
   int countt=0;
   while(a<=b)
   {

       a=a*3;
       b=b*2;
       countt++;
   }
   cout<<countt;
}
