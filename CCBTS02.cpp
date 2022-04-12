#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n;
	    int ans=200;
	    bool state = false;
	    cin>>n;
	    string s;
	    for(int i=0;i<n;i++)
	        {
	            cin>>s;
	            if(state==false && s=="stop" )
	             ans =404;
	            if (s=="start"||s=="restart")
	             state =true;
	            if(s=="stop")
	            state=false;
	        }
	        cout<<ans<<endl;
	    
	}
	return 0;
}
