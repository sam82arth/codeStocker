#include<iostream>
using namespace std;
int main()
{
    int tc,b,n,r;
    cin>>tc;
    while(tc--)
    {
        cin>>b;
        n=(b/2)-1;
        r=(n*(n+1))/2;
        cout<<r<<endl;
    }
    return 0;
}