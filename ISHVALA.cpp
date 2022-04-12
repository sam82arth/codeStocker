#include <iostream>
using namespace std;

int main() {
int t,M,N,S,nx,ny,m,n,a=0,b=0;
	cin>>t;
    while(t--){
	    cin >> M >>N;
        cin >> nx >> ny >> S;
        int x[nx+2], y[ny+2];
        x[0]=0;
        y[0]=0;
        x[nx+1]=M+1;
        y[ny+1]=N+1;
        
        for(int i=1;i<=nx;i++){
            cin >>x[i];
        }
        for(int i=1;i<=ny;i++){
            cin >>y[i];
        }
        
        for(int i=0;i<=nx;i++){
            m=x[i+1]-x[i]-1;
            a=a+m/S;
        }
        for(int i=0;i<=ny;i++){
            n=y[i+1]-y[i]-1;
            b=b+n/S;
        }
	        cout << a*b << "\n";
	        a=0;
	        b=0;
	    	}
	return 0;
}
