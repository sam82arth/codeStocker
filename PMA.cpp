#include <bits/stdc++.h>>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	   long long int n,i,j,min=  INT_MAX,m=INT_MIN,sum=0;
	    cin>>n;
	   long long  int arr[n+1];
	    for(i=0;i<n;i++)
	      {
	          int x;
	          cin>>x;
	            arr[i]= abs(x);
	          if(i&1)
	          {
	              sum =  sum -arr[i];
	          }
	          else
	          sum+=arr[i];
	      }
	      
	    for(i=0;i<n;i++)
	    {
	        if(i&1 && arr[i]>m)
	        {
	            m=arr[i];
	        }
	        else if(!(i&1) && arr[i]<min)
	        {
	            min=arr[i];
	        }
	        
	    }
	  
	    if(m<=min)
	    cout<<sum<<endl;
	    else
	    cout<<sum+ (2*(m-min))<<endl;
	}
	return 0;
}
