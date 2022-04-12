#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,m,l,i=1,j,x,c[100004],count=1;
	    map<int, int> mp;
	    cin>>n>>m>>l;
	    while(m--)
	    {
	       cin>>j;
	       while(j--)
	       {
	           cin>>x;
	           mp.insert({ x, i });
	       }
	       i++;
	    }
	    for(i=0;i<l;i++)
	        cin>>c[i];
	        
	    auto itr = mp.find(c[0]);
	    int prev = int(itr->second);
	    
        for(i=1;i<l;i++)
        {
            auto q = mp.find(c[i]);
            int y = int(q->second);
       
            if(prev!=y && q != mp.end())
            {
                count++;
                prev = y ;
            }
            
           
        }
	   
	    cout<<count<<endl;
	}
	return 0;
}
