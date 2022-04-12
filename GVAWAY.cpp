#include <stdio.h>

int main(void) {

int tc;
scanf("%d",&tc);
while(tc--)
{
int l,r,k,diff,count=0;
    scanf("%d%d%d",&l,&r,&k);
    if(r==l)
    {
       printf("1\n");
    }
    else
    {
        printf("%d\n",k);
    }
}
    
	return 0;
}

