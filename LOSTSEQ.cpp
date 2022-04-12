#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,x,e=0,o=0;
	    cin>>n;
	    for(int i=0;i<2*n;i++)
	    {
	      cin>>x;
	        x=abs(x);
	        
	         if(x%2!=0)
	            o++;
	        else
	            e++;
	    }

	   
	   if(e%2==0&&o%2==0)
	       cout<<"YES\n";
	   else 
	    cout<<"NO\n";
	   
	   
	        
	}
	return 0;
}
