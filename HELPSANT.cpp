#include <stdio.h>

int main(void) {
	int tc;
tc=1;
	while(tc--)
	{
	    long int n;
	    int a,x[50]={0},i;
	    scanf("%ld",&n);
	    for( i=0;i<n;i++)
	    {
	        scanf("%d",&a);
	        x[a]++;
	    }
	    for(i=0;i<=30;i++)
	  {
	      if(x[i]>=1)
	    printf("%d ",i);
	  }
	  printf("\n");
	    
	}
	return 0;
}

