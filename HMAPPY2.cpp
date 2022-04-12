#include <stdio.h>
#include<math.h>

 long long int gcd(long long int a,long long int b) 
{ 
    if (b == 0)
        return a; 
    return gcd(b , a%b); 
} 
long long int  lcm(long long int a, long long int b)
{
    return (a / gcd(a, b)) * b;
}


int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	     long long int n,a,b,k;
	    scanf("%lld%lld%lld%lld",&n,&a,&b,&k);
	    if(n/a+n/b-2*(n/(lcm(a,b)))>=k)
	    printf("Win\n");
	    else
	    printf("Lose\n");
	}
	return 0;
}

