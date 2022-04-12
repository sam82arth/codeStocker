#include <stdio.h>

int main(void) {
int tc;
scanf("%d",&tc);
while(tc--)
{
   long long int n;
   scanf("%lld",&n);
    if(n&1)
        printf("%lld\n",((n+1)/2));
    
    else
         printf("%lld\n",((n/2)+1));
}
	return 0;
}

