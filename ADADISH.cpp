#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n,i,j,c[5],flag=1,t=0,temp=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&c[i]);
	       
	    }
	    sort(c,c+n);
	    if(n==1)
	       {
	            printf("%d\n",c[0]);
	            continue;
	       }
	   if(n==2)
	       {
	           printf("%d\n",max(c[0],c[1]));
	           continue;
	       }
	       if(n==3)
	       {
	           printf("%d\n",max(c[0]+c[1],c[2]));
	           continue;
	       }
	   if(n==4)
	   {
	         i=max(c[0]+c[3],c[2]+c[1]);
              j=max(c[0]+c[1]+c[2],c[3]);
             printf("%d\n",min(i,j));
             continue;
     }
	}
	
	return 0;
}
