#include <iostream>
using namespace std;

int main() {
int tc;
cin>>tc;
while(tc--)
{
    long long int m,h,x;
    cin>>m>>h;
    x=m/(h*h);
    if(x<=18)
        cout<<"1"<<endl;
    else
    if(x<=24&&x>=19)
        cout<<"2"<<endl;
    else
    if(x>=25&&x<=29)
        cout<<"3"<<endl;
    else
    if(x>=30)
        cout<<"4"<<endl;
}
	return 0;
}
