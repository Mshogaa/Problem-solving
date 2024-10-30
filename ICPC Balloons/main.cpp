#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,co=0;
       cin>>n;
       string s;
       cin>>s;
       for(int i=0;i<n;i++)
       {
          if(s[i]!=s[i+1])
          {
              co+=2;
          }
          if(s[i]==s[i+1])
          {
              co++;
          }
       }
       cout<<co<<endl;
   }
}
