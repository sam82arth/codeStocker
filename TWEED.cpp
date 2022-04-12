#include <stdio.h>
#include<string.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n,a[1000],flag=0,c=0,i;
	   char name[5];
	    scanf("%d%s",&n,name);
	    if(strcmp(name,"Dee"))
	    {
	        flag=1; 
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]%2==0)
	            c++;
	    }
	    if(n==1&&(!flag)&&c==1)
	    {
	        printf("Dee\n");
	    }
	    else
	    {
	        printf("Dum\n");
	    }
	}
	return 0;
}

