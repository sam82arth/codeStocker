#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int k;
	    scanf("%d",&k);
	    int i,j;
	    for(i=0;i<8;i++)
	    {
	        for(j=0;j<8;j++)
	        {
	            if(i==0&&j==0)
	          {  k--;
	            printf("O");
	          }
	           else 
	            if(k!=0)
	           {
	               printf(".");
	               k--;
	           }
	           else
	           printf("X");
	           
	        }
	         printf("\n");
	    }
	   
	}
	return 0;
}

