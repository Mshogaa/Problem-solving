#include <iostream>
using namespace std;
void f(int r)
{
    int sc=0;
   while(r!=0)
   {
       if(r==5||r==4||r==3||r==2||r==1)
       {
       sc+=1;
       break;
       }
       else
        {
        r=r-5;
        sc+=1;
       }

   }
   cout<<sc;
}
int main()
{
   int x;
   cin>>x;
   f(x);
}
