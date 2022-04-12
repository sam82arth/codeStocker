#include <bits/stdc++.h>
using namespace std;

long long int nCr(long long int n, long long int r)
{

    long long int p = 1, k = 1;
 

    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
           
            long long int m = __gcd(p, k);
 
         
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
       
    }
 
    else
        p = 1;
 

    return p;
}
 


int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	  long long  int n,q,i,j,a[100004], temp[100004]={0},e=0,l,r,res=0;
	   cin>>n>>q;
	   for(i=1;i<=n;i++)
	    cin>>a[i];
        for(i=1;i<=n;i++)
        {
           if(a[i]%2==0)
            e++;
           temp[i]=e;
        }
    // for(i=1;i<=n;i++)
    // cout<<temp[i]<<" ";
	   while(q--)
	   {   
	       res=0;
	       cin>>l>>r;
	       long long  int x = temp[r]-temp[l-1];
	       long long  int y = (r-l+1)-x;
    	    if(x>=3)
	       res= nCr(x,3);
	       if(y>=2&&x>=1)
	       res += (nCr(y,2)*x);
	    
	       
	    
	       cout<<res<<endl;
	       
	   }
	}
	return 0;
}
