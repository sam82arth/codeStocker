#include<stdio.h>
int main()
{
int tc;
scanf("%d",&tc);
while(tc--)
{
    int n;
    int i,count=1,min=100,max=-1,flag=0;
    scanf("%d",&n);
    int a[10000]={0};
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        i=1;
    for(i=1;i<=n;i++)
    {
        if(a[i+1]-a[i]<3&&i!=n)
            count++;
            else
        {    
        if(count>max)
            {
                max=count;
                if(flag==0)
                min=max;
                flag=1;
            }
        if(count<min)
            min = count;
           
           
            count=1;
        }
    }


       printf("%d %d",min,max);

printf("\n");
}
return 0;
}
