#include <iostream>

using namespace std;

int main()
{
   int t;
   char c;
   cin>>t;

   while(t--)
   {
       cin>>c;
       if(c=='c'||c=='o'||c=='d'||c=='f'||c=='r'||c=='e'||c=='s')
       {
           cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
   }
}
