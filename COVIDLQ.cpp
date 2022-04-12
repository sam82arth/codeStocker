#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
    int n,flag=2,c=0,count=0;
    scanf("%d",&n);
    int a[101],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   
    for(i=0;i<n;i++)
    {
    if(a[i]==1)
   { 
    count++;
    if(count==1)
    {
    c=i;
    flag=0;
    }
    if((count>1)&&((i-c)<=5))
   { 
    flag=1;
    break;
   }
   if((count>1)&&(i-c>5))
  {    
    c=i;
    flag=0;
   }
    }
   
    }

    
    if(flag==1)
    printf("NO\n");
    if(flag==0)
    printf("YES\n");
    }
    return 0;
}