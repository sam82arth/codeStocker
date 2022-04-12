#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int a[100005],b[100005],i,j,n,min,min_index=-1;
	    cin>>n;
	    min=n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	     for(i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    for(i=0;i<n;i++)
	    {       
	        int x = (a[0]+b[i])%n ;
	        if(x<= min)
	        {
	            if(x<min)
	            {
	                min_index=i;
	                min=x;
	                continue;
	            }
	            if(min!=n)
	            {
	                for(j=1;j<n;j++)
	                {
	                    if(  ((a[j]+b[(min_index+j)%n])%n) > ((a[j]+b[(i+j)%n])%n)   )
	                    {
	                        min_index=i;
	                        min=((a[0]+b[i])%n);
	                        break;
	                       
	                    }
	                    else if(  ((a[j]+b[(min_index+j)%n] )%n) == ((a[j]+b[(i+j)%n])%n)   )
	                       continue;
	                    else
	                       break;
	                    }
	            }
	            else
	            {
	            min = ((a[0]+b[i])%n);
	            min_index = i;
	            }
	        }
	    }
	    
	    
	    for(i=0;i<n;i++)
	    cout<<((a[i]+b[(min_index+i)%n])%n)<<" ";
	    cout<<endl;
	    
	}
	return 0;
}
