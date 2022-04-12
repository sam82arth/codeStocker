#include <iostream>
using namespace std;

int main() {
        string s,w;
        int a[26]={0},i,j;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            a[s[i]-97]++;
        }
        cin>>j;
        while(j--)
        {
            cin>>w;
            for(i=0;i<w.length();i++)
            {
                if(a[w[i]-97]==0)
                    break;
            }
            if(i==w.length())
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    
	return 0;
}
