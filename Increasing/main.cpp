#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       bool x;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[n];
       }
        for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) {
            x=true;
            break;
        }
        else{
            x=false;
        }
        }
       if(x==true)
       {
           cout<<"yes"<<endl;
       }
       else
        {
        cout<<"no"<<endl;
       }

}
   }

