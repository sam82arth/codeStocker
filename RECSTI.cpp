#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,i,j,a[104]={0},r=0;
	    cin>>n;
	    int count =n;
	    for(i=0;i<n;i++)
	    {
	        cin>>j;
	        a[j] =a[j]+1;
	    }
	  
	    for(i=1;i<=103;i++)
	    {
	        if(a[i]%2 ==1)
	        {
	            count++;
	            r++;
	        }
	    }

	    count =count%4;
	    cout<<r+count<<"\n";
	}
	return 0;
}
