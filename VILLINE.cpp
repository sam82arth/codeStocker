#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,m,c,x,y,p,h=0,g=0;
    cin>>n>>m>>c;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>p;
        if(y-(m*x)-c>0)
            h=h+p;
        else
           g=g+p;

    }
    if(h>g)
        cout<<h;
        else
        cout<<g;
    return 0;
}
