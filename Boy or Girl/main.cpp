#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int countt=0;
    sort(s.begin(),s.end());
    for(int i=1;i<s.length();i++){
        if(s[i] != s[i-1]){
            countt++;
        }
    }
    if(countt%2 ==0){
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
