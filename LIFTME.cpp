#include <iostream>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--)
    {
       long long  int n,q,a,b,i,j=0,c=0;
        cin>>n>>q;
        for(i=0;i<2*q;i++)
        {
            cin>>a;
            c+=abs(j-a);
            j=a;
            
        }
           
      
        cout<<c<<endl;
        
    }
	return 0;
}
