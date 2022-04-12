#include<stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int tc,*p,*c,flag=0;
	cin>>tc;
	while (tc)
	{   flag=0;
	   int x,y,k,n;
cin>>x>>y>>k>>n;
p=(int*)calloc(n,sizeof(int));
c=(int*)calloc(n,sizeof(int));
for(int i=0;i<n;i++)
{
    cin>>*(p+i)>>*(c+i);

}
for(int i=0;i<n;i++)
{
  if((*(p+i)+y>=x)&&(*(c+i)<=k))
    flag=1;
   
  
}
if(flag==0)
    printf("UnluckyChef\n");
if(flag==1)
    printf("LuckyChef\n");

	    tc--;
	}
	free(p);
	free(c);
		return 0;
}
