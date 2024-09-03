#include <iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,f=0;
      cin>>n;
      string first,secound;
      cin>>first;
      cin>>secound;
      for(int i=0;i<n;i++)
      {
          if(first[i]!=secound[i]&&(first[i]=='R'||secound[i]=='R'))
          {
              f=1;
              break;
          }
      }
      if(f)
      {
          cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
  }
}
