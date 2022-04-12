#include <iostream>
using namespace std;

int main() {
int tc;
cin>>tc;
while(tc--)
{
    long long int x,y,k,n,j;
    cin>>x>>y>>k>>n;
    if(abs(x-y)%(2*k)==0)
    {
    
          cout<<"Yes"<<endl;
         
    }
   else
   cout<<"No"<<endl;



}
	return 0;
}
