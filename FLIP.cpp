#include <stdio.h>
#include<string.h>

int main(void) {
int tc;
scanf("%d",&tc);
while(tc--)
{
    char a[100000],b[100000];
    long long int i,j,count=0;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<strlen(a);i++)
    {
        if((a[i]^b[i]))
        {   
            j=i;
            while(j<strlen(a)&&a[j]^b[j])
            {
                a[j]=b[j];
                j+=2;
            }
            count++;
        }
    }
    printf("%lld\n",count);
}
	return 0;
}

