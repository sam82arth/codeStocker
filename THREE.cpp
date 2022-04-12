#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    string s;
	    int a[10000]={0},count=0,i,j;
	    cin>>s;
	    if(s.size()<3)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    for( i=0;i<s.size();i++)
	    {
	        a[s[i]-96]++;
	    }
	    
	    for(i=1;i<=26;i++)
	    {
	        if(a[i]==3)
	        {
	            count++;
	            a[i]-=3;
	        }
	        else
	        if(a[i]>3)
	        {
	            count++;
	            a[i]-=3;  
	            i--;
	            continue;
	        }
	        else
	        if(a[i]>=1)
	        {
	            for(j=1;j<=26;j++)
	            {
	                if(i!=j)
	                {
	                    if(a[i]==1&&a[j]>=2)
	                    {
	                        a[i]--;
	                        a[j]-=2;
	                        count++;
	                    }
	                    else
	                    if(a[i]==2&&a[j]>=1)
	                    {
	                          a[j]--;
	                        a[i]-=2;
	                        count++; 
	                    }
	                }
	            }
	        }
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
