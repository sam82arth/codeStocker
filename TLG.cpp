#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n,*p,*q,a,b,m,r;
	 cin>>n;
	a=b=m=0;
	p=(int*)calloc(n,sizeof(int));
	q=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
    {
        cin>>*(p+i)>>*(q+i);
        a=a+*(p+i);
        b=b+*(q+i);
        if(a>b&&m<a-b)
            {
                m=a-b;
                r=1;
            }
        if(b>a&&m<b-a)
        {
            m=b-a;
            r=2;
        }
    }
    
cout<<r<<" "<<m<<endl;
	
	free(p);
	free(q);
	return 0;
}
