#include <iostream>

using namespace std;

int main()
{
   int N;
   cin>>N;
   int arr[N];
   for(int i=0;i<N;i++)
   {
       cin>>arr[i];
   }
   int Q;
   cin>>Q;
   while(Q--)
   {
       int L,R;
       cin>>L>>R;
       int sum=0;
       for(L;L<=R;L++)
       {
           sum+=arr[L-1];
       }
       cout<<sum<<endl;
   }
}
