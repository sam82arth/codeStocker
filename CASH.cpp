#include<stdio.h>
int main()
{
int tc;
scanf("%d",&tc);
while(tc--)
    {
        int n,i;
        long long int k,a[100000],sum=0;
        scanf("%d%lld",&n,&k);
        for(i=0;i<n;i++)
            {
                scanf("%lld",&a[i]);
                sum=sum+a[i];
            }
        printf("%lld\n",sum%k);
    }
return 0;
}