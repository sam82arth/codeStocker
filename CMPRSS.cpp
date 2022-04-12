#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,i,j;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;)
        {
            if(i>=1)
                printf(",");
            j=i+1;
            while(a[j]-a[i]==j-i)
                j++;
            if(j-i>=3)
            {
                printf("%d...%d",a[i],a[j-1]);
                i=j;
            }
            else
            {
                printf("%d",a[i]);
                i++;
            }
        }
        printf("\n");
    }
    return 0;

}