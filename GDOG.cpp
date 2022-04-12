#include <stdio.h>

int main(void) {
int tc;
scanf("%d",&tc);
while(tc--)
{
    int n,k,max=-1,r=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=k;i++)
    {
        r=n%i;
        if(r>max)
        max=r;
    }
    printf("%d\n",max);
}
	return 0;
}

