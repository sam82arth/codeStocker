#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    long long int x,y;
	    scanf("%lld%lld",&x,&y);
	    if(x==y)
	     {
	         printf("0\n");
	         continue;
	     }
	     if(x>y)
	     {
	         if((x-y)%2==0)
	          {
	              printf("1\n");
	              continue;
	          }
	          else
	          {
	              printf("2\n");
	              continue;
	              
	          }
	     }
	    if(y>x)
	     {
	         if((y-x)%2!=0)
	         {
	             printf("1\n");
	             continue;
	         }
	         else
	         {
	             if(((y-x)/2)%2==0)
	             {
	                 printf("3\n");
	                continue;
	             }
	             else
	             {
	               printf("2\n");
	                continue;
	             }
	         }
	     }
	}
	return 0;
}

