#include<bits/stdc++.h>
using namespace std;
int main() {
	int tc;
	cin>>tc;
		map<char,bool> test;
    for(int i=0;i<26;i++)
    {
        char temp = 'a'+i;
        test.insert({temp,true});
      
    }
	while(tc--)
	{
	map<string,vector<bool>> sclass;
	
	   long long int n,i,j,c=0;
	    cin>>n;
	    string s;
	    for(i=0;i<n;i++)
	  {
	      cin>>s;
	      if(!sclass.count(s.substr(1)))
	     {
	         vector<bool> temp(26);
	         temp[s.front()-'a']=true;
	         sclass.insert({s.substr(1),temp});
	     } 
	     else
	     {
	         sclass[s.substr(1)][s.front()-'a']=true;
	     }
	  }
	        
	       long long ans=0;
	       for(auto j : sclass)
	       {
	          
	           for(auto i : sclass)
	           {
	                long long int a=0,b=0,c=0;
	               for(int x=0;x<26;x++)
	               {
	                   if(j.second[x]==i.second[x]&&j.second[x]==true)
	                   c++;
	                   if(j.second[x]==true)
	                   a++;
	                   if(i.second[x]==true)
	                   b++;
	               }
	               c=(a-c)*(b-c);
	               ans+=c;
	             }
	       }
	  
	    cout<<ans<<endl;
	}
	return 0;
}