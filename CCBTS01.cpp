#include <iostream>
using namespace std;

int main() {
int tc;
cin>>tc;
while(tc--)
{
    char s[3];
   bool p=false;bool c=false; bool m=false;
    cin>>s;
    for(int i=0;i<3;i++)
    {
        if(s[i]=='P')
      p=true;
    }
     for(int i=0;i<3;i++)
    {
        if(s[i]=='M')
        m=true;
    }
      for(int i=0;i<3;i++)
    {
        if(s[i]=='C')
        c=true;
    }
    if(p&&c&&m)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
	return 0;
}
