#include <stdio.h>
#include<math.h>

int main(void) {
	double tc,x;

	scanf("%lf",&tc);
	while(tc--)
	{
	    int n;
	    scanf("%d",&n);
	   
	        x=n/26;
	       if(n%26>0&&n%26<=2)
	       {
	           printf("%.0lf 0 0\n",pow(2,x));
	           continue;
	       }
	       else
	       if(n%26>2&&n%26<=10)
	       {
	           printf("0 %.0lf 0\n",pow(2,x));
	           continue;
	       }
	       else
	       {
	           
	            if(n%26==0)
	                 x=x-1;
	       printf("0 0 %.0f\n",pow(2,x));
	       continue;
	   
	       }
	      
	   
	  
	    
	}
	return 0;
}

