#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int x,h;
	    scanf("%d%d",&h,&x);
	    if(h>=x)
	    printf("Yes\n");
	    else
	    printf("No\n");
	    
	}
	return 0;
}

