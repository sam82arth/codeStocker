#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,i,x=0;
	    bool z=1;
	    cin>>n;
	    string str;
	    cin>>str;
        float maxC = 1;
        for ( i=0; i<n; i++){
        if (str[i] == str[i+1] && i < n-1 )
         maxC++;
        else{
            x+= ceil(maxC/2);
         maxC = 1;
        }
        }
        cout<<x<<endl;
	}
	return 0;
}
