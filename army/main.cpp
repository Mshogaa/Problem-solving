#include <iostream>

using namespace std;

int main()
{
   int n,a,b,sum=0;
   cin>>n;
   int d[n-1];
   for(int i=0;i<n-1;i++)
   {
       cin>>d[i];
   }

   cin>>a>>b;
   for(int i=a;i<b;i++)
   {
       sum += d[i-1];
   }
   cout<<sum<<endl;
    return 0;
}
