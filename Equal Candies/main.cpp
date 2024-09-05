#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int sum=0;
        cin>>n;
        int candies[n];
        for(int i=0;i<n;i++)
        {
            cin>>candies[i];
        }
        int minn=candies[0];
        for(int i=1;i<n;i++)
        {
            if(minn>candies[i])
            {
                minn=candies[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            sum+=(candies[i]-minn);
        }
        cout<<sum<<endl;
    }
}
