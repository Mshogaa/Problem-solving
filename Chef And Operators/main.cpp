#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s;
    int u=0,r=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
	{
      if(islower(s[i]))
      {
        r++;
      }
      else{
        u++;
      }
	}
	if(u>r)
	  {
	      for(int i=0;i<s.length();i++)
	      {
            s[i]=toupper(s[i]);
	      }
	  }
	  else
      {
          for(int i=0;i<s.length();i++)
	     {
            s[i]=tolower(s[i]);
         }
      }
      cout<<s;
}
