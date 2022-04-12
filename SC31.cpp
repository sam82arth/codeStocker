#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n,i,j,w=0;
	    scanf("%d",&n);
	    char W[100000][12];
	    for(i=0;i<n;i++)
	    {
	        scanf("%s",&W[i][1]);
	    }
	     for(i=0;i<n-1;i++)
	    {
	        for(j=1;j<=10;j++)
	        {
	            
	        if(W[i][j]=='1'&& W[i+1][j]=='1')
	            W[i+1][j]='0';
	        else
	        {
	        if(W[i][j]=='1'|| W[i+1][j]=='1')
	            W[i+1][j]='1';
	        }
	        }
	    }
	      for(i=1;i<=10;i++)
    {
        if(W[n-1][i]=='1')
        w++;
    }
    printf("%d\n",w);
	    
	    
	}
	return 0;
}

