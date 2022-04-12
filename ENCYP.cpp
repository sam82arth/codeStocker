#include <iostream>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--)
    {
      	string s;
	cin>>s;
        s[0]=65+ (s[0]-65+98)%26;
        s[1]=65+(s[1]-65+57)%26;
        s[2]=65+(s[2]-65+31)%26;
        s[3]=65+(s[3]-65+45)%26;
        s[4]=65+(s[4]-65+46)%26;
        cout<<s<<endl;
	 
    }

	return 0;
}
