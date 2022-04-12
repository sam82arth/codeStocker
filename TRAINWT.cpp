#include <iostream>
using namespace std;

int main() {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n;
	    long long int i,j, a[10000],q,b[1000000][3],sum=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
	   cin>>q;
	   for(i=0;i<q;i++)
	   {
	       cin>>b[i][0];
	       cin>>b[i][1];
	       cin>>b[i][2];
	   }
	   for(i=0;i<q;i++)
	   {
	       for(j=b[i][0]-1;j<b[i][1];j++)
	       {
	           a[j]+=b[i][2];
	       }
	   }
	   for(i=0;i<n;i++)
	   {
	       sum+=a[i];
	   }
	   printf("%lld\n",sum);
	}
	return 0;
}
