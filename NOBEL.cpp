#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t,n,m,b;
	cin>>t;
	while(t--){
        set<ll> s1;
        cin>>n>>m;
	    for(ll i=0;i<n;i++){
	        cin>>b;
	        s1.insert(b);
	    }
	   
	    if(s1.size()<m)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	}
	return 0;
}
