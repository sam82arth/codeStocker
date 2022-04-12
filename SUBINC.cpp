#include <iostream>
using namespace std;



int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	  long long  int n,a[100004]={0},i,c=1,result=0,flag=1;
	    cin>>n;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    for(i=0;i<n;i++)
	    {
	        if(a[i+1]>=a[i]) 
	            c++;
	        else
	            flag=0;
	        if(flag==0||i==n)
	        {
	            result+=c*(c+1)/2;
	            flag=1;
	            c=1;
	        }
	    }
	    cout<<result<<endl;
	    
	}
	return 0;
}
