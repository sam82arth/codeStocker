#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int R,C,K,i,j,count=0;
	    scanf("%d %d %d",&R,&C,&K);
	    for(i=R-K;i<=R+K;i++)
	    {
	        for(j=C-K;j<=C+K;j++)
	        {
	            if((i>=1 && i<=8) && (j>=1 && j<=8))
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}

