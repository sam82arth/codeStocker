#include<bits/stdc++.h>
using namespace std;

	long long int dx[]={-2,-1,1,2,2,1,-1,-2};
    long long int dy[]={1,2,2,1,-1,-2,-2,-1};
	long long int dx1[]={-1,-1,0,1,1,1,0,-1};
    long long int dy1[]={0,1,1,1,0,-1,-1,-1};

bool check( long long int x, long long int y, long long int x0, long long int y0){

    long long int i;
	for(i=0;i<8;i++)
	{
		if(x+dx[i]==x0 && y+dy[i]==y0)
		    return true;
	}
	return false;
}
int main()
{

     
     long long int tc;
     cin>>tc;
 
     while(tc--){

        long long int i,j, n;
        cin>>n;
        bool a=false,b=true;
        long long int  x[n],y[n];
       for(i=0;i<n;i++)
        {
           cin>>x[i]>>y[i];
        }
        
        long long int  x0,y0;
        
        cin>>x0>>y0;
        
        for(i=0;i<n;i++)
        {
        	if(check(x[i],y[i],x0,y0)) 
        	a=true;
        }
        
       for(i=0;i<n;i++)
       {
        for(j=0;j<8;j++)
            {
            
        		if(x0+dx1[j] != x[i] || y0+dy1[j]!= y[i])
        		b=false;
        	}
        }
        if(a and !b) cout<<"YES\n";
        else cout<<"NO\n";


     }
    

    return 0;

}