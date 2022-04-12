#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n,a[1000],test[100000]={0},i,max=0,flag=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]>max)
	        {
	            max=a[i];
	        }
	        test[a[i]]++;
	    }
	    for(i=0;i<=max;i++)
	    {
	        if(test[i]>1)
	        {
	            printf("ne krasivo\n");
	            flag=1;
	            break;
	        }
	    }
	    if(!flag)
	        printf("prekrasnyy\n");
	}
	return 0;
}

