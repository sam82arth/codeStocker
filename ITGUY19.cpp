#include <stdio.h>

int main(void) {
int tc;
scanf("%d",&tc);
while(tc--)
{
    int n,i,a=0,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        b=b^a;
    }
    printf("%d\n",b);
}
	return 0;
}

