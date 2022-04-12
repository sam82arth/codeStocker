
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int tc,sum=0;
	int *p;
	cin>>tc;
	while (tc)
	{  sum=0; 
	   int n,c;
cin>>n>>c;

p=(int*)calloc(n,sizeof (int));
for(int i=0;i<n;i++)
{
    cin>>*(p+i);
    sum=sum+*(p+i);
}
if (sum<=c)
printf("Yes\n");
else
    printf("No\n");
	    tc--;
	}
	free(p);
	return 0;
}
