#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{   
	    int w1,r1,c1,w2,r2,c2,a=0,b=0;
	    cin>>r1>>c1>>w1>>r2>>c2>>w2;
	    if(r1>r2)a++;else b++;
	    if(w1>w2)a++;else b++;
	    if(c1>c2)a++;else b++;
	    if(a>b) cout<<"A\n"; else cout<< "B\n";
	}
	return 0;
}
