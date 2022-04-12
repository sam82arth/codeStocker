#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int x=5,a,r=0;
	    while(x--)
	    {
	        cin>>a;
	        r+=a;
	    }
	    if(r==0)
	    cout<<"Beginner"<<endl;
	    else
	    if(r==1)
	    cout<<"Junior Developer"<<endl;
	    
	    else
	    if(r==2)
	    cout<<"Middle Developer"<<endl;
	    
	    else
	    if(r==3)
	    cout<<"Senior Developer"<<endl;
	   
	    else
	    if(r==4)
	    cout<<"Hacker"<<endl;
	    
	    else
	    if(r==5)
	    cout<<"Jeff Dean"<<endl;
	    
	    
	}
	return 0;
}
