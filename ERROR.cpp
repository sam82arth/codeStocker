#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        cin>>str;
        if((str.find("010")!=string::npos) || (str.find("101")!=string::npos))
        {
            cout<<"Good"<<endl;
        }
        else
        {
            cout<<"Bad"<<endl;
        }
    }
	return 0;
}
