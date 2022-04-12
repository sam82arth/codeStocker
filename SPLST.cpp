#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		long long int a,b,c,x,y;
		scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&x,&y);
		if(a+b+c==x+y)
		{
			if((x>=a || x>=b || x>=c) && (y>=a || y>=b || y>=c))
			{
				printf("YES");
			}
			else
			{
				printf("NO");
			}
		}
		else
		{
			printf("NO");
		}
		printf("\n");
	}
	return 0;
}