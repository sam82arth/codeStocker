#include <stdio.h>

int main(void) {
int tc;
scanf("%d",&tc);
while(tc--)
{
    long long int a,b,c=0,e1,o1,e2,o2;
    scanf("%lld%lld",&a,&b);
    e1=a/2;
    o1=a-e1;
    e2=b/2;
    o2=b-e2;
    c=(e1*e2)+(o1*o2);
    printf("%lld\n",c);
   

}
	return 0;
}

