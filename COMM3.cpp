#include <iostream>
#include<math.h>
using namespace std;

int main() {

	int tc,r,i,x[3],y[3],d[3],count;
	cin>>tc;
	while(tc--)
	{
        cin>>r;
        count=0;
        for(i=0;i<3;i++)
        {
           cin>>x[i]>>y[i];

        }
        for(i=0;i<2;i++)
        {   d[i]=(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
        }
            d[2]=(pow(x[2]-x[0],2)+pow(y[2]-y[0],2));
            if(d[1]<=r*r)
            count++;
            if(d[2]<=r*r)
            count++;
            if(d[0]<=r*r)
            count++;
            if(count>=2)
                cout<<"yes"<<endl;
            else cout<<"no"<<endl;
	}
	return 0;
}
