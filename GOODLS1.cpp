#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void testcase();

int main() {

	int z,t;
	scanf("%d",&t);
	for(z=0;z<t;z++)
	{
	  int i, n, c=0, a[1000]={0},p,r=0;
    char s[100000];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        p=s[i];
        if(a[p]==0)
        {
            r++;
            a[p]++;
        }
        c++;
    }
    printf("%d\n",c-r);

	}
	return 0;
}


    