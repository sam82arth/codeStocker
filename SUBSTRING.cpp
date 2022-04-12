#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--)
    {
        int i,c=0,m=INT_MIN;
        string s;
        cin>>s;
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i]!=s[0]&&s[i]!=s[s.size()-1])
                c++;
            else
            {
           
                c=0;
            }     
            m= max(m,c);
        }
        
        cout<<(m>0?m:-1)<<"\n";
    
    }
	return 0;
}
