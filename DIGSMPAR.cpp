#include <iostream>
using namespace std;

int digitSum( long long int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
    
}
int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int n;
	    cin>>n;
	    if((digitSum(n)%2) != (digitSum(n+1)%2))
	    cout<<n+1<<"\n";
	    else 
	    cout<<n+2<<"\n";
	}
	return 0;
}
