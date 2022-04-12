#include <iostream>
using namespace std;

int main() {
	int tc,n,Y,N,I,i;
	cin>>tc;
	while(tc--)
	{   Y=0;
    	I=0;
    	N=0;
	    cin>>n;
	    char c[1000];
	    for(i=0;i<n;i++)
	    {cin>>c[i];
	    if(c[i]=='Y')
	    Y=1;
	    else   if(c[i]=='N')
	    N=1;
	    else if(c[i]=='I')
	    I=1;
	    }
	    if(I==1)
	    cout<<"INDIAN"<<endl;
	    else if(Y==1)
	    cout<<"NOT INDIAN"<<endl;
	    else if(N==1)
	    cout<<"NOT SURE"<<endl;
	    }
	
	
	return 0;
}
