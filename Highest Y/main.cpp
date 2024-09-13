#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include<vector>
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
              {
                   return (a.second < b.second);
              }

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i].first>>v[i].second;

    }
     sort(v.begin(), v.end(), sortbysec);
    for(int i=n-1;i>=0;i--)
    {
    cout<<v[i].first<<" "<<v[i].second<<endl;
    }


}
