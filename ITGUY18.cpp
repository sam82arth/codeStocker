#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
	    long long int n;
	    cin >> n;
	   cout << (n * (n + 1) / 2) * (2*n + 1) / 3  <<endl;
	        
	}
	return 0;
}
