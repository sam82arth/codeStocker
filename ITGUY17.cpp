#include <stdio.h>

int main(void) {
int tc;
scanf("%d",&tc);
while(tc--)
{
    float n,k;
    scanf("%f%f",&n,&k);
    printf("%.0f\n",k*(ceil(n/2)));
}
	return 0;
}

