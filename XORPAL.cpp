#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,x=0,i;
	    string s;
	    cin>>n>>s;
	    if(n==2) cout<<"YES\n";
	     else
	     {
	         for(i=0;i<s.size();i++)
	           if(s[i]=='1') x++;
	         if(!(n&1))
	         {
	             if(!(x&1)) cout<<"YES\n";
	             else if(x==n/2) cout<<"YES\n";
	             else cout<<"NO\n";
	         }
	         else
	            cout<<"YES\n";
	     }
	     
	  
	   
	}
	return 0;
}
